#pragma once

#include "CoreMinimal.h"
#include "CorePlayerLevelTooltipViewData.h"
#include "PlayerLevelViewData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerLevelViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PlayerLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 PrestigeLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FCorePlayerLevelTooltipViewData TooltipData;

public:
	DBDUIVIEWINTERFACES_API FPlayerLevelViewData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerLevelViewData) { return 0; }
