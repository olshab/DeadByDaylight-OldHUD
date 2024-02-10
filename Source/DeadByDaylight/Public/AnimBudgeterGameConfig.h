#pragma once

#include "CoreMinimal.h"
#include "AnimBudgeterGameConfig.generated.h"

USTRUCT()
struct FAnimBudgeterGameConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Enabled;

	UPROPERTY()
	float Ps4Budget;

	UPROPERTY()
	float Ps5Budget;

	UPROPERTY()
	float XboxOneBudget;

	UPROPERTY()
	float XsxBudget;

	UPROPERTY()
	float SwitchBudget;

	UPROPERTY()
	TArray<float> SteamBudgets;

public:
	DEADBYDAYLIGHT_API FAnimBudgeterGameConfig();
};

FORCEINLINE uint32 GetTypeHash(const FAnimBudgeterGameConfig) { return 0; }
