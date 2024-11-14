// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StrategyPatternGameMode.generated.h"

UCLASS(minimalapi)
class AStrategyPatternGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AStrategyPatternGameMode();

protected:
	virtual void BeginPlay() override;
public:

	virtual void Tick(float DeltaTime) override;
};



