#pragma once

#include "CoreMinimal.h"
#include "EStopCondition.h"
#include "HighDensityMeshReductionSettings.generated.h"

USTRUCT(BlueprintType)
struct FHighDensityMeshReductionSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 OnScreenSizeEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnScreenSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 MaxDeviationEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxDeviation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EStopCondition StopCondition;

	UPROPERTY()
	FString ProcessSelectionSetName;

public:
	SIMPLYGONUOBJECTS_API FHighDensityMeshReductionSettings();
};

FORCEINLINE uint32 GetTypeHash(const FHighDensityMeshReductionSettings) { return 0; }
