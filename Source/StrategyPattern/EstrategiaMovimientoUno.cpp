// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovimientoUno.h"
#include "StrategyPatternCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEstrategiaMovimientoUno::AEstrategiaMovimientoUno()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaMovimientoUno::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMovimientoUno::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMovimientoUno::Maniobra(float DeltaTime, AActor* Enemigo)
{
	static bool bMensajeMostrado = false;
	static bool bMensajeAsesinado = false;


    APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
    if (!Player) return;

    FVector Direccion = Player->GetActorLocation() - Enemigo->GetActorLocation();//.GetSafeNormal();
    float DistanceToPlayer = Direccion.Size();

    // Si el enemigo est� cerca del jugador
    if (DistanceToPlayer < 500.f)
    {
        Direccion.Normalize();
        Enemigo->AddActorWorldOffset(Direccion * DeltaTime * 300.f);

        // Mostrar mensaje una sola vez
        if (!bMensajeMostrado)
        {
            GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Magenta,
                FString::Printf(TEXT("Enemigo Moviendose hacia el jugador")));
            bMensajeMostrado = true;
        }

        // Verificar si hay colisi�n con el jugador
        if (DistanceToPlayer < 100.f && !bMensajeAsesinado)
        {
            GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Magenta,
                FString::Printf(TEXT("Ataque sorpresa")));
            bMensajeAsesinado = true;
        }
    }
    else
    {
        bMensajeMostrado = false;
        bMensajeAsesinado = false;

    }
}

