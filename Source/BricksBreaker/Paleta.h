// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Paleta.generated.h"

UCLASS()
class BRICKSBREAKER_API APaleta : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APaleta();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
