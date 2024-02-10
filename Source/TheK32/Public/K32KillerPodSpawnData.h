#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningInputData.h"
#include "K32KillerPodSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSpawnData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FK32KillerPodSpawningInputData InputData;

	UPROPERTY(BlueprintReadOnly)
	FVector CollisionPoint;

	UPROPERTY(BlueprintReadOnly)
	FVector SpawnLocation;

	UPROPERTY(BlueprintReadOnly)
	FRotator SpawnForwardRotation;

	UPROPERTY(BlueprintReadOnly)
	FVector SurfaceNormal;

public:
	THEK32_API FK32KillerPodSpawnData();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawnData) { return 0; }
