// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoLeon.h"

AEnemigoLeon::AEnemigoLeon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> Malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
    if (Malla.Succeeded())
    {
        MeshEnemigo->SetStaticMesh(Malla.Object);
    }

}

void AEnemigoLeon::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoLeon::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemigoLeon::AlterarManiobras(AActor* MiEstrategiaBatalla)
{
    Super::AlterarManiobras(MiEstrategiaBatalla);
}

void AEnemigoLeon::Ensamblar()
{
    Super::Ensamblar();
}

void AEnemigoLeon::DejarBomba()
{
}
