#pragma once

#include "CoreMinimal.h"
#include "PriceTagViewData.h"
#include "EOriginWidgetState.h"
#include "EPlayerRole.h"
#include "EItemRarity.h"
#include "CustomizationTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FText ParentName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText RarityPartInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText CollectionDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText RoleCategoryInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EOriginWidgetState CustomizationOriginState;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText CustomizationOriginInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsLocked;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsUnbreakable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsEquipped;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsBuyable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOwned;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsOutfitPart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText OutfitInfoText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	EPlayerRole AssociatedRole;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> Prices;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsEnabled;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText CustomizationDisabledMessage;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventBannerLabel;

public:
	DBDUIVIEWINTERFACES_API FCustomizationTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationTooltipViewData) { return 0; }
