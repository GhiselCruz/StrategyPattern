// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemigo.h"
#include "EnemigoCocodrilo.generated.h"

/**
 * 
 */
UCLASS()
class STRATEGYPATTERN_API AEnemigoCocodrilo : public AEnemigo
{
	GENERATED_BODY()
	

public:
	AEnemigoCocodrilo();
protected:
	virtual void BeginPlay() override;
public:
	virtual void Tick(float DeltaTime) override;

	void AlterarManiobras(AActor* MiEstrategiaBatalla) override;
	virtual void Ensamblar() override;
};
