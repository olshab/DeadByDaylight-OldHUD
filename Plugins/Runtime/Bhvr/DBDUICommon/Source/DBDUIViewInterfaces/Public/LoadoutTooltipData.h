#pragma once

#include "CoreMinimal.h"
#include "EItemRarity.h"
#include "EInventoryItemType.h"
#include "EItemAvailability.h"
#include "LoadoutTooltipData.generated.h"

USTRUCT(BlueprintType)
struct FLoadoutTooltipData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText ParentDisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Level;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemRarity Rarity;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsLocked;

	UPROPERTY(BlueprintReadOnly, Transient)
	FText EventName;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventId;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool IsPastEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EInventoryItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemAvailability Availability;

	UPROPERTY(BlueprintReadOnly, Transient)
	FString EventBannerLabel;

public:
	DBDUIVIEWINTERFACES_API FLoadoutTooltipData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadoutTooltipData) { return 0; }
