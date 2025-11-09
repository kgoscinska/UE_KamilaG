// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KamaBaseCharacter.h"
#include "KamaBasePlayerCharacter.generated.h"

class UInteractionComponent;

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
};
