#pragma once

#include "CoreMinimal.h"
#include "LoadoutTooltipData.h"
#include "PriceTagViewData.h"
#include "ShrineOfSecretsItemViewData.generated.h"

class UMenuPerkViewData;

USTRUCT(BlueprintType)
struct FShrineOfSecretsItemViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	FName ItemId;

	UPROPERTY(BlueprintReadOnly)
	int32 BPCost;

	UPROPERTY(BlueprintReadOnly, Transient)
	UMenuPerkViewData* Perk;

	UPROPERTY(BlueprintReadOnly)
	FLoadoutTooltipData PerkTooltip;

	UPROPERTY(BlueprintReadOnly)
	bool PerkMaxed;

	UPROPERTY(BlueprintReadOnly)
	bool BPClaimed;

	UPROPERTY(BlueprintReadOnly)
	FPriceTagViewData PriceTag;

public:
	DBDUIVIEWINTERFACES_API FShrineOfSecretsItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const FShrineOfSecretsItemViewData) { return 0; }
