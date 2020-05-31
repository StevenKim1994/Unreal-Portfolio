// Fill out your copyright notice in the Description page of Project Settings.


#include "ABGameMOde.h"
#include "ABCharacter.h"
#include "ABPlayerController.h"
AABGameMOde::AABGameMOde()
{
	DefaultPawnClass = AABCharacter::StaticClass();
	PlayerControllerClass = AABPlayerController::StaticClass();
}

void AABGameMOde::PostLogin(APlayerController* NewPlayer)
{
	ABLOG(Warning, TEXT("PostLogin Begin"));
	Super::PostLogin(NewPlayer);
	ABLOG(Warning, TEXT("PostLogin End"));
}
