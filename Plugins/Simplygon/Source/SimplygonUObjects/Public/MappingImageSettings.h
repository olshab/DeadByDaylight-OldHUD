#pragma once

#include "CoreMinimal.h"
#include "ChartAggregatorSettings.h"
#include "InputMaterialSettings.h"
#include "ETexCoordGeneratorType.h"
#include "ParameterizerSettings.h"
#include "OutputMaterialSettings.h"
#include "MappingImageSettings.generated.h"

USTRUCT(BlueprintType)
struct FMappingImageSettings
{
	GENERATED_BODY()

public:
	UPROPERTY()
	uint8 GenerateMappingImage : 1;

	UPROPERTY()
	uint8 GenerateTexCoords : 1;

	UPROPERTY()
	uint8 GenerateTangents : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ReplaceMappingImages : 1;

	UPROPERTY()
	uint8 UseFullRetexturing : 1;

	UPROPERTY()
	uint8 ApplyNewMaterialIds : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseAutomaticTextureSize : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float AutomaticTextureSizeMultiplier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 ForcePower2Texture : 1;

	UPROPERTY()
	uint8 OnlyParameterizeInvalidUVs : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 AllowTransparencyMapping : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaximumLayers;

	UPROPERTY()
	int32 TexCoordLevel;

	UPROPERTY()
	FString TexCoordName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	ETexCoordGeneratorType TexCoordGeneratorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 OutputMaterialCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 InputMaterialCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FChartAggregatorSettings ChartAggregatorSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FParameterizerSettings ParameterizerSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FInputMaterialSettings> InputMaterialSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FOutputMaterialSettings> OutputMaterialSettings;

public:
	SIMPLYGONUOBJECTS_API FMappingImageSettings();
};

FORCEINLINE uint32 GetTypeHash(const FMappingImageSettings) { return 0; }
