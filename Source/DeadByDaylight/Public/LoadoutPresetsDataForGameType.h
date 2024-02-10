#pragma once

#include "CoreMinimal.h"
#include "CharacterLoadoutPresetsList.h"
#include "LoadoutPresetsDataForGameType.generated.h"

USTRUCT()
struct FLoadoutPresetsDataForGameType
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FCharacterLoadoutPresetsList> CharacterLoadoutPresetsList;

public:
	DEADBYDAYLIGHT_API FLoadoutPresetsDataForGameType();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutPresetsDataForGameType) { return 0; }
