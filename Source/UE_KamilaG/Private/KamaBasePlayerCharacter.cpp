// Fill out your copyright notice in the Description page of Project Settings.


#include "KamaBasePlayerCharacter.h"
#include "Public/Components/InteractionComponent.h"

AKamaBasePlayerCharacter::AKamaBasePlayerCharacter()
{
	InteractionComponent = CreateDefaultSubobject<UInteractionComponent>(TEXT("InteractionComponent"));
}
