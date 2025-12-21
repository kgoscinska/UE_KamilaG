// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "KamaItem.h"
#include "MyKamaWeapon.generated.h"

/**
 * 
 */
UCLASS()
class UE_KAMILAG_API AMyKamaWeapon : public AKamaItem
{
	GENERATED_BODY()
	
protected:
	virtual void PickUp() override;

};
