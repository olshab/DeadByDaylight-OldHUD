#pragma once

#include "CoreMinimal.h"
#include "SimplygonPipeline.h"
#include "HighDensityMeshReductionPipelineSettings.h"
#include "HighDensityMeshReductionPipeline.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SIMPLYGONUOBJECTS_API UHighDensityMeshReductionPipeline : public USimplygonPipeline
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FHighDensityMeshReductionPipelineSettings Settings;

public:
	UHighDensityMeshReductionPipeline();
};

FORCEINLINE uint32 GetTypeHash(const UHighDensityMeshReductionPipeline) { return 0; }
