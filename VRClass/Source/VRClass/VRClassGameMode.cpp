// Copyright Epic Games, Inc. All Rights Reserved.

#include "VRClassGameMode.h"
#include "VRClassHUD.h"
#include "VRClassCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVRClassGameMode::AVRClassGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Character/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVRClassHUD::StaticClass();
}
