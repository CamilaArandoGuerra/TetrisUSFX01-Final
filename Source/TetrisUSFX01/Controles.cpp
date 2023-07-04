// Fill out your copyright notice in the Description page of Project Settings.


#include "Controles.h"

// Sets default values
AControles::AControles()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AControles::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControles::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

int AControles::Puntos = 0.0f;
int AControles::Lineas = 0.0f;
int AControles::Bloques = 0.0f;
float AControles::TiempoJuego = 0.0f;
bool AControles::GameOver = false;

