#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningData.generated.h"

class AK32KillerPod;
class ACamperPlayer;

USTRUCT(BlueprintType)
struct FK32KillerPodSpawningData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FVector CollisionPoint;

	UPROPERTY(BlueprintReadOnly)
	FVector SpawnLocation;

	UPROPERTY(BlueprintReadOnly)
	FRotator SpawnForwardRotation;

	UPROPERTY(BlueprintReadOnly)
	FVector SurfaceNormal;

	UPROPERTY(BlueprintReadOnly)
	AK32KillerPod* PodToDestroy;

	UPROPERTY(BlueprintReadOnly)
	ACamperPlayer* TargetSurvivor;

public:
	THEK32_API FK32KillerPodSpawningData();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawningData) { return 0; }
