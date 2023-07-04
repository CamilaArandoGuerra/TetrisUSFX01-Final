// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Controles.generated.h"

UCLASS()
class TETRISUSFX01_API AControles : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AControles();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	static int Puntos;
	static int Lineas;
	static float TiempoJuego;
	static bool GameOver;
	static int Bloques;


};
