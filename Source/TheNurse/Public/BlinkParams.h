#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlinkParams.generated.h"

USTRUCT()
struct FBlinkParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector TargetTranslation;

	UPROPERTY()
	float Duration;

	UPROPERTY()
	float Timestamp;

public:
	THENURSE_API FBlinkParams();
};

FORCEINLINE uint32 GetTypeHash(const FBlinkParams) { return 0; }
