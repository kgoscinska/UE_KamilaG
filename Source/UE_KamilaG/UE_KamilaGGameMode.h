// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE_KamilaGGameMode.generated.h"

/**
 *  Simple GameMode for a third person game
 */
UCLASS(abstract)
class AUE_KamilaGGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	
	/** Constructor */
	AUE_KamilaGGameMode();
};



