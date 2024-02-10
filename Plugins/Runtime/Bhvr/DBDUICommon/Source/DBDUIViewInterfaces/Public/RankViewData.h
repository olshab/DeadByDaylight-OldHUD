#pragma once

#include "CoreMinimal.h"
#include "RankTooltipViewData.h"
#include "RankViewData.generated.h"

USTRUCT(BlueprintType)
struct FRankViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FRankTooltipViewData tooltipViewData;

public:
	DBDUIVIEWINTERFACES_API FRankViewData();
};

FORCEINLINE uint32 GetTypeHash(const FRankViewData) { return 0; }
