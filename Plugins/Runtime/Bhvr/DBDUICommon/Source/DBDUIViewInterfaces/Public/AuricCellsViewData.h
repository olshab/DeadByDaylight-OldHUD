#pragma once

#include "CoreMinimal.h"
#include "AuricCellsBundleViewData.h"
#include "AuricCellsFirstPurchaseViewData.h"
#include "AuricCellsViewData.generated.h"

USTRUCT(BlueprintType)
struct FAuricCellsViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	TArray<FAuricCellsBundleViewData> Bundles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FAuricCellsFirstPurchaseViewData FirstPurchase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString TaxIncludeMessage;

public:
	DBDUIVIEWINTERFACES_API FAuricCellsViewData();
};

FORCEINLINE uint32 GetTypeHash(const FAuricCellsViewData) { return 0; }
