// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoCocodrilo.h"

AEnemigoCocodrilo::AEnemigoCocodrilo()
{
    static ConstructorHelpers::FObjectFinder<UStaticMesh> Malla(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_NarrowCapsule.Shape_NarrowCapsule'"));
    if (Malla.Succeeded())
    {
        MeshEnemigo->SetStaticMesh(Malla.Object);
    }
}

void AEnemigoCocodrilo::BeginPlay()
{
    Super::BeginPlay();
}

void AEnemigoCocodrilo::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void AEnemigoCocodrilo::AlterarManiobras(AActor* MiEstrategiaBatalla)
{
    Super::AlterarManiobras(MiEstrategiaBatalla);
}

void AEnemigoCocodrilo::Ensamblar()
{
    Super::Ensamblar();
}
