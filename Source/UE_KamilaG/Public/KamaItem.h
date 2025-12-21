// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interfaces/InteractionInterface.h"
#include "GameFramework/Actor.h"
#include "KamaItem.generated.h"

UCLASS()
class UE_KAMILAG_API AKamaItem : public AActor, public IInteractionInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKamaItem();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void PickUp();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
