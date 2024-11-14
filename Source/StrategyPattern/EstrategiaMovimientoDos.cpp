// Fill out your copyright notice in the Description page of Project Settings.


#include "EstrategiaMovimientoDos.h"
#include "StrategyPatternCharacter.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AEstrategiaMovimientoDos::AEstrategiaMovimientoDos()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEstrategiaMovimientoDos::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstrategiaMovimientoDos::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstrategiaMovimientoDos::Maniobra(float DeltaTime, AActor* Enemigo)
{
    static bool bMensajeSorpresa = false;
    APawn* Player = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

    FVector Direccion = Player->GetActorLocation() - Enemigo->GetActorLocation();
    float DistanceToPlayer = Direccion.Size();

    // Define la distancia a la que el BattleShip empezará a atacar
    float AttackDistance = 500.f;

    if (DistanceToPlayer < AttackDistance)
    {
        // Desaparecer (ocultar) el BattleShip
        Enemigo->SetActorHiddenInGame(true);

        // Teletransportarse a una nueva posición en el eje Y, manteniendo el mismo X y Z del BattleShip
        FVector NewLocation = Enemigo->GetActorLocation();  // Conserva la misma ubicación en X y Z
        NewLocation.Y += FMath::RandRange(-800.0f, 800.0f);  // Cambiar solo la posición Y aleatoriamente (puedes ajustar el rango)

        Enemigo->SetActorLocation(NewLocation);

        // Reaparecer (mostrar) el BattleShip
        Enemigo->SetActorHiddenInGame(false);

        // Mostrar mensaje en pantalla indicando el ataque
        if (bMensajeSorpresa) {


            GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Red,
                TEXT("¡Ataque sorpresa! El BattleShip ha reaparecido en una nueva posición y está atacando."));
            bMensajeSorpresa = true;
        }

        // Realizar el ataque moviéndose hacia el jugador
        Direccion.Normalize();
        Enemigo->AddActorWorldOffset(Direccion * DeltaTime * 50.f);  // Velocidad de ataque
    }
    else
    {
        bMensajeSorpresa = false;
    }
}

