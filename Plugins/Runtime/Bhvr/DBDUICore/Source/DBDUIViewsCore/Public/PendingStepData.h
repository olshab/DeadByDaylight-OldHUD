#pragma once

#include "CoreMinimal.h"
#include "OnboardingTutorialButtonViewData.h"
#include "PendingStepData.generated.h"

USTRUCT(BlueprintType)
struct FPendingStepData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FOnboardingTutorialButtonViewData> updatedButtonViewData;

public:
	DBDUIVIEWSCORE_API FPendingStepData();
};

FORCEINLINE uint32 GetTypeHash(const FPendingStepData) { return 0; }
