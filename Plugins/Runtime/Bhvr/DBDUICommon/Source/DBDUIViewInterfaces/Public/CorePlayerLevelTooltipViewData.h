#pragma once

#include "CoreMinimal.h"
#include "CorePlayerLevelTooltipViewData.generated.h"

USTRUCT(BlueprintType)
struct FCorePlayerLevelTooltipViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentXP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentCapXP;

public:
	DBDUIVIEWINTERFACES_API FCorePlayerLevelTooltipViewData();
};

FORCEINLINE uint32 GetTypeHash(const FCorePlayerLevelTooltipViewData) { return 0; }
