#pragma once

#include "CoreMinimal.h"
#include "DisabledItemData.h"
#include "CharacterFallbackData.h"
#include "ItemCharacterKillswitchData.generated.h"

USTRUCT()
struct FItemCharacterKillswitchData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FCharacterFallbackData CharacterFallback;

	UPROPERTY()
	TMap<FString, FDisabledItemData> DisabledItems;

	UPROPERTY(SkipSerialization)
	bool DisabledItems_IsSet;

public:
	DEADBYDAYLIGHT_API FItemCharacterKillswitchData();
};

FORCEINLINE uint32 GetTypeHash(const FItemCharacterKillswitchData) { return 0; }
