#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.h"
#include "EOutputDDSCompressionType.h"
#include "EOutputPixelFormat.h"
#include "EDitherType.h"
#include "EFillMode.h"
#include "EOutputColorSpace.h"
#include "EOutputImageFileFormat.h"
#include "ComputeCasterSettings.generated.h"

USTRUCT(BlueprintType)
struct FComputeCasterSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString MaterialChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString OpacityChannel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOpacityChannelComponent OpacityChannelComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDitherType DitherType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EFillMode FillMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Dilation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 UseMultisampling : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputPixelFormat OutputPixelFormat;

	UPROPERTY()
	EOutputImageFileFormat OutputImageFileFormat;

	UPROPERTY()
	EOutputDDSCompressionType OutputDDSCompressionType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EOutputColorSpace OutputColorSpace;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 CastLayersFrontToBack : 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 MaxCastLayers;

public:
	SIMPLYGONUOBJECTS_API FComputeCasterSettings();
};

FORCEINLINE uint32 GetTypeHash(const FComputeCasterSettings) { return 0; }
