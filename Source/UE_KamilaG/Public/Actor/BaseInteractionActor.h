// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Interfaces/InteractionInterface.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseInteractionActor.generated.h"

UCLASS()
class UE_KAMILAG_API ABaseInteractionActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	ABaseInteractionActor();


protected:
	virtual void BeginPlay() override;

	// Interface implementation
	virtual void Interact_Implementation(AActor* OuterActor) override;

};
