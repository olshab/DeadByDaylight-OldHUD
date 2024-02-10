#pragma once

#include "CoreMinimal.h"
#include "HangTimesPerStep.generated.h"

USTRUCT()
struct FHangTimesPerStep
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString SourceName;

	UPROPERTY()
	FString StepName;

	UPROPERTY()
	float PossibleHangTime;

	UPROPERTY()
	float HardCapTimeout;

	UPROPERTY()
	float TimeCapWithoutProgress;

public:
	DEADBYDAYLIGHT_API FHangTimesPerStep();
};

FORCEINLINE uint32 GetTypeHash(const FHangTimesPerStep) { return 0; }
