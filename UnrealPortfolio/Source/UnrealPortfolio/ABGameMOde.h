// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UnrealPortfolio.h"
#include "GameFramework/GameModeBase.h"
#include "ABGameMOde.generated.h"

/**
 * 
 */
UCLASS()
class UNREALPORTFOLIO_API AABGameMOde : public AGameModeBase
{
	GENERATED_BODY()

public:
	AABGameMOde();

	virtual void PostLogin(APlayerController* NewPlayer) override;
	
	
};
