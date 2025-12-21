// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/InteractionInterface.h"
#include "BaseInteractionActor.generated.h"

UCLASS()
class UE_KAMILAG_API ABaseInteractionActor : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	ABaseInteractionActor();
	//void Interact(AActor* OuterActor);

protected:
	virtual void BeginPlay() override;
	virtual void Interact_Implementation(AActor* OuterActor);

};
