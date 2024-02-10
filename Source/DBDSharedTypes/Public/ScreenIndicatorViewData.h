#pragma once

#include "CoreMinimal.h"
#include "EHudScreenIndicatorType.h"
#include "UObject/NoExportTypes.h"
#include "ScreenIndicatorViewData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FScreenIndicatorViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudScreenIndicatorType IndicatorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ViewportSize;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsInFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector2D ScreenPosition;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Distance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* AdditionalData;

public:
	DBDSHAREDTYPES_API FScreenIndicatorViewData();
};

FORCEINLINE uint32 GetTypeHash(const FScreenIndicatorViewData) { return 0; }
