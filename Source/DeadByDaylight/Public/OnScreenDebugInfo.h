#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "OnScreenDebugInfo.generated.h"

USTRUCT()
struct FOnScreenDebugInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Message;

	UPROPERTY()
	FColor Color;

	UPROPERTY()
	uint64 Key;

	UPROPERTY()
	float TimeToDisplay;

	UPROPERTY()
	bool IsDrawDebug;

	UPROPERTY()
	FVector DrawDebugLocation;

public:
	DEADBYDAYLIGHT_API FOnScreenDebugInfo();
};

FORCEINLINE uint32 GetTypeHash(const FOnScreenDebugInfo) { return 0; }
