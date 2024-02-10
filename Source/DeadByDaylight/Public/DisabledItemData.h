#pragma once

#include "CoreMinimal.h"
#include "DisabledItemData.generated.h"

USTRUCT()
struct FDisabledItemData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FString> GameTypes;

	UPROPERTY(SkipSerialization)
	bool GameTypes_IsSet;

public:
	DEADBYDAYLIGHT_API FDisabledItemData();
};

FORCEINLINE uint32 GetTypeHash(const FDisabledItemData) { return 0; }
