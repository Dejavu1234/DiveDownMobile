// Fill out your copyright notice in the Description page of Project Settings.


#include "Wall.h"
#include "Engine.h"
#include "DiveDownCharacter.h"
#include "Engine/StaticMesh.h"

// Sets default values
AWall::AWall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("Scene");

	WallMesh1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Wall"));
	
}

// Called when the game starts or when spawned
void AWall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
	//WallMesh->GetOverlappingActors(CollidingObjects);

	//if (CollidingObjects.Num() > 0)
	//{
	//	for (auto& Elem : CollidingObjects)
	//	{
	//		if (ADiveDownCharacter* _player = Cast<ADiveDownCharacter>(Elem))
	//		{
	//			//Jasper kill character code chat be pogging
	//			GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, FString("I hit my head"));
	//		}
	//	}
	//}
	
}

