// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IEstrategias.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EstrategiaMovimientoUno.generated.h"

UCLASS()
class STRATEGYPATTERN_API AEstrategiaMovimientoUno : public AActor, public IIEstrategias
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEstrategiaMovimientoUno();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void Maniobra(float DeltaTime, AActor* Enemigo) override;

};
