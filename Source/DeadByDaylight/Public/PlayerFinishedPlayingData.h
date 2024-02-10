#pragma once

#include "CoreMinimal.h"
#include "PlayerFinishedPlayingData.generated.h"

USTRUCT(BlueprintType)
struct FPlayerFinishedPlayingData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 HexTotemCount;

public:
	DEADBYDAYLIGHT_API FPlayerFinishedPlayingData();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerFinishedPlayingData) { return 0; }
