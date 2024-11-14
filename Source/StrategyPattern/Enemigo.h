// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IEstrategias.h"
#include "Enemigo.generated.h"

UCLASS()
class STRATEGYPATTERN_API AEnemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigo();

private:
	IIEstrategias* EstrategiaMovimiento;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


	//malla del enemigo
	UPROPERTY(VisibleAnywhere, Category = " Malla")
	class UStaticMeshComponent* MeshEnemigo;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	virtual void AlterarManiobras(AActor* MiEstrategiaBatalla);
	virtual void Ensamblar();
	void DejarBomba();
};
