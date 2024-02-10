#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningIndicatorSettings.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSpawningIndicatorSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FVector SpawnLocation;

	UPROPERTY(BlueprintReadOnly)
	FRotator SpawnForwardRotation;

	UPROPERTY(BlueprintReadOnly)
	bool IsVisible;

	UPROPERTY(BlueprintReadOnly)
	bool IsInValidLocationForKillerPod;

	UPROPERTY(BlueprintReadOnly)
	bool IsDestroyingPod;

	UPROPERTY(BlueprintReadOnly)
	bool IsTeleportingToSurvivor;

public:
	THEK32_API FK32KillerPodSpawningIndicatorSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawningIndicatorSettings) { return 0; }
