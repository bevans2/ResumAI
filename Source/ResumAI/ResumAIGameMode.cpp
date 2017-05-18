// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ResumAI.h"
#include "ResumAIGameMode.h"
#include "ResumAICharacter.h"

AResumAIGameMode::AResumAIGameMode()
{
	// set default pawn class to our character
	DefaultPawnClass = AResumAICharacter::StaticClass();	
}
