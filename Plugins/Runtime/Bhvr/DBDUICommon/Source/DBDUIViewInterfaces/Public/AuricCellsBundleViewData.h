#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "AuricCellsBundleViewData.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FAuricCellsBundleViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, Transient)
	FName Id;

	UPROPERTY(BlueprintReadWrite, Transient)
	TSoftObjectPtr<UTexture2D> IconTexture;

	UPROPERTY(BlueprintReadWrite, Transient)
	FText BundleName;

	UPROPERTY(BlueprintReadWrite, Transient)
	int32 CurrencyAmount;

	UPROPERTY(BlueprintReadWrite, Transient)
	FString DisplayedPrice;

	UPROPERTY(BlueprintReadWrite, Transient)
	float BonusPercentage;

	UPROPERTY(BlueprintReadWrite, Transient)
	FString LimitedTimeText;

public:
	DBDUIVIEWINTERFACES_API FAuricCellsBundleViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAuricCellsBundleViewData) { return 0; }
