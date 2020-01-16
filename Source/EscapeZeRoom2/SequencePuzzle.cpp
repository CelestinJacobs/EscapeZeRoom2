// Fill out your copyright notice in the Description page of Project Settings.


#include "SequencePuzzle.h"
#include "SequencePuzzleButton.h"


// Sets default values
ASequencePuzzle::ASequencePuzzle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASequencePuzzle::BeginPlay()
{
	Super::BeginPlay();
	UWorld* World = GetWorld();
	if (World)
	{
		World->SpawnActor<ASequencePuzzleButton>(ButtonClass, GetTransform());
	}

	
}

// Called every frame
void ASequencePuzzle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

