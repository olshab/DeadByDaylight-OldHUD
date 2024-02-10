#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodSpawningInputData.generated.h"

USTRUCT(BlueprintType)
struct FK32KillerPodSpawningInputData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FVector KillerLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector IndicatorLocation;

	UPROPERTY(BlueprintReadOnly)
	FVector CameraDirection;

public:
	THEK32_API FK32KillerPodSpawningInputData();
};

FORCEINLINE uint32 GetTypeHash(const FK32KillerPodSpawningInputData) { return 0; }
