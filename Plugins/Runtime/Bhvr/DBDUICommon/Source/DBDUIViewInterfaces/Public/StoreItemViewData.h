#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PriceTagViewData.h"
#include "StoreItemViewData.generated.h"

UCLASS(BlueprintType)
class DBDUIVIEWINTERFACES_API UStoreItemViewData : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FPriceTagViewData> PriceTagData;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsNewInStore;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString LimitedTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DiscountTimeText;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString DlcId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText DlcTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString PackId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText PackTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDlcValid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsDlcPurchasable;

public:
	UFUNCTION(BlueprintPure)
	bool GetIsBuyable() const;

public:
	UStoreItemViewData();
};

FORCEINLINE uint32 GetTypeHash(const UStoreItemViewData) { return 0; }
