// Fill out your copyright notice in the Description page of Project Settings.


#include "KamaBasePlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Public/Components/InteractionComponent.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"
#include "GameFramework/CharacterMovementComponent.h"

AKamaBasePlayerCharacter::AKamaBasePlayerCharacter()
{
	InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.f, 400.f, 0.f);
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;
}

void AKamaBasePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	if (APlayerController* PC = Cast< APlayerController>(GetController()))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem< UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(MappingContext, 0);
		}
	}

}

void AKamaBasePlayerCharacter::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Display, TEXT("AKamaBasePlayerCharacter::Interact"));
}

void AKamaBasePlayerCharacter::Move(const FInputActionValue& Value)
{
	FVector2D moveValue = Value.Get<FVector2D>();

	if (Controller)
	{
		if (moveValue.X != 0.f)
		{
			const FRotator YawRotation(0.f, GetControlRotation().Yaw, 0.f);
			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			AddMovementInput(Direction, moveValue.X);

		}
		if (moveValue.Y != 0.f)
		{

			const FRotator YawRotation(0.f, GetControlRotation().Yaw, 0.f);
			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
			AddMovementInput(Direction, moveValue.Y);
		}
	}
}

void AKamaBasePlayerCharacter::Look(const FInputActionValue& Value)
{
	FVector2D AxisValue = Value.Get<FVector2D>();

	if (Controller)
	{
		AddControllerYawInput(AxisValue.X);
		AddControllerPitchInput(AxisValue.Y);
	}
}

void AKamaBasePlayerCharacter::Attack(const FInputActionValue& Value)
{
	
}

void AKamaBasePlayerCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInputComponent)
	{
		EnhancedInputComponent->BindAction(InteractAction,ETriggerEvent::Started,this,&AKamaBasePlayerCharacter::Interact);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AKamaBasePlayerCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AKamaBasePlayerCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &AKamaBasePlayerCharacter::Interact);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Started, this, &AKamaBasePlayerCharacter::Attack);
	}
	
}
