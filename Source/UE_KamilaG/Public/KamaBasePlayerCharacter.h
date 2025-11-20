// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KamaBaseCharacter.h"
#include "KamaBasePlayerCharacter.generated.h"


class UInputAction;

class UInteractionComponent;
class UInputMappingContext;
struct FInputActionValue;
/**
 * 
 */
UCLASS()
class UE_KAMILAG_API AKamaBasePlayerCharacter : public AKamaBaseCharacter
{
	GENERATED_BODY()
protected:
	AKamaBasePlayerCharacter();
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	UInteractionComponent* InteractionComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* Interaction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	
	UInputMappingContext* MappingContext;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	
	UInputAction* MoveAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	
	UInputAction* LookAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	
	UInputAction* InteractAction;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	
	UInputAction* AttackAction;


	void Interact(const FInputActionValue& Value);
	void Move(const FInputActionValue& Value);
	void Look(const FInputActionValue& Value);
	void Attack(const FInputActionValue& Value);
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
