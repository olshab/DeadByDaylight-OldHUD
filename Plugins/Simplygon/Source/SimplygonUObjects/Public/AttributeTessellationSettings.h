#pragma once

#include "CoreMinimal.h"
#include "EAttributeTessellationDensityMode.h"
#include "ETransformationSpace.h"
#include "AttributeTessellationSettings.generated.h"

USTRUCT(BlueprintType)
struct FAttributeTessellationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 EnableAttributeTessellation : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttributeTessellationDensityMode AttributeTessellationDensityMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETransformationSpace TransformationSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxAreaOfTessellatedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float MaxLengthOfTessellatedValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OnScreenSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 OnlyAllowOneLevelOfDifference : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MinTessellationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTessellationLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxTotalValuesCount;

public:
	SIMPLYGONUOBJECTS_API FAttributeTessellationSettings();
};

FORCEINLINE uint32 GetTypeHash(const FAttributeTessellationSettings) { return 0; }
