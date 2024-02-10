#pragma once

#include "CoreMinimal.h"
#include "ERewardType.h"
#include "CustomizationTooltipViewData.h"
#include "CurrencyProgressionTooltipViewData.h"
#include "ArchiveRewardNodeTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FArchiveRewardNodeTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	ERewardType RewardType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString NodeDebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FCustomizationTooltipViewData CustomizationTooltipViewData;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Transient)
	FCurrencyProgressionTooltipViewData CurrencyProgressionTooltipViewData;

public:
	DBDUIVIEWINTERFACES_API FArchiveRewardNodeTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FArchiveRewardNodeTooltipViewData) { return 0; }
