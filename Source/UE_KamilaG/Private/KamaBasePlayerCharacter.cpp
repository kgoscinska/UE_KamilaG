// Fill out your copyright notice in the Description page of Project Settings.


#include "KamaBasePlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "Public/Components/InteractionComponent.h"
#include "InputActionValue.h"
#include "InputMappingContext.h"

AKamaBasePlayerCharacter::AKamaBasePlayerCharacter()
{
	InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
}

void AKamaBasePlayerCharacter::Interact(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Display, TEXT("AKamaBasePlayerCharacter::Interact"));
}

void AKamaBasePlayerCharacter::Move(const FInputActionValue& Value)
{
	
}

void AKamaBasePlayerCharacter::Look(const FInputActionValue& Value)
{
	
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
		EnhancedInputComponent->BindAction(Interaction,ETriggerEvent::Started,this,&AKamaBasePlayerCharacter::Interact);
	}
	
}
