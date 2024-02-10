#pragma once

#include "CoreMinimal.h"
#include "RewardViewData.h"
#include "PriceTagViewData.h"
#include "CustomizationTooltipViewData.h"
#include "UObject/NoExportTypes.h"
#include "EItemRarity.h"
#include "ECustomizationCategory.h"
#include "CustomizationRewardViewData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationRewardViewData: public FRewardViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName CustomizationId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FName OutfitId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FDateTime ReleaseDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBuyable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnbreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEventItem;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCustomizationTooltipViewData TooltipData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ECustomizationCategory CustomizationCategory;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 AssociatedCharacter;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsEnabled;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool GrantsMilestonePointOnUnlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString InclusionVersion;

public:
	DBDUIVIEWINTERFACES_API FCustomizationRewardViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationRewardViewData) { return 0; }
