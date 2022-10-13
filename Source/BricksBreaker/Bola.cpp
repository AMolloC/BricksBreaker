// Fill out your copyright notice in the Description page of Project Settings.


#include "Bola.h"

// Sets default values
ABola::ABola()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABola::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABola::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABola::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

