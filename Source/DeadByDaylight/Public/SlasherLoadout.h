#pragma once

#include "CoreMinimal.h"
#include "CharmDropdown.h"
#include "CharacterCustomizationDropdown.h"
#include "DebugLoadoutPerk.h"
#include "DebugLoadoutAddon.h"
#include "SlasherLoadout.generated.h"

USTRUCT(BlueprintType)
struct FSlasherLoadout
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FCharmDropdown Slot0_CharmID;

	UPROPERTY(EditAnywhere)
	FCharmDropdown Slot1_CharmID;

	UPROPERTY(EditAnywhere)
	FCharmDropdown Slot2_CharmID;

	UPROPERTY(EditAnywhere)
	TArray<FDebugLoadoutPerk> Perks;

	UPROPERTY(EditAnywhere)
	TArray<FDebugLoadoutAddon> PowerAddonIDs;

	UPROPERTY(EditAnywhere)
	FCharacterCustomizationDropdown Slasher;

public:
	DEADBYDAYLIGHT_API FSlasherLoadout();
};

FORCEINLINE uint32 GetTypeHash(const FSlasherLoadout) { return 0; }
