#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipelineSettings.h"
#include "HighDensityMeshReductionSettings.h"
#include "HighDensityMeshReductionPipelineSettings.generated.h"

USTRUCT(BlueprintType)
struct FHighDensityMeshReductionPipelineSettings: public FSimplygonPipelineSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHighDensityMeshReductionSettings HighDensityMeshReductionSettings;

public:
	SIMPLYGONUOBJECTS_API FHighDensityMeshReductionPipelineSettings();
};

FORCEINLINE uint32 GetTypeHash(const FHighDensityMeshReductionPipelineSettings) { return 0; }
