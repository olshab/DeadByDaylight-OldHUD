#pragma once

#include "CoreMinimal.h"
#include "RankTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FRankTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 Rank;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool IsKiller;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString RankName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 RankPipsCount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 ActivePipsCount;

public:
	DBDUIVIEWINTERFACES_API FRankTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FRankTooltipViewData) { return 0; }
