#pragma once

#include "CoreMinimal.h"
#include "LTEData.generated.h"

USTRUCT()
struct FLTEData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString GameType;

	UPROPERTY()
	FString GameModeQueue;

	UPROPERTY()
	float IncentiveBonus;

public:
	DEADBYDAYLIGHT_API FLTEData();
};

FORCEINLINE uint32 GetTypeHash(const FLTEData) { return 0; }
