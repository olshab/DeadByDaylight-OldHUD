#pragma once

#include "CoreMinimal.h"
#include "BlockFeedbackStyleOverride.generated.h"

class ABlockFeedbackBase;

USTRUCT()
struct FBlockFeedbackStyleOverride
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<ABlockFeedbackBase*> BlockSelfFeedbacks;

	UPROPERTY(Transient)
	TArray<ABlockFeedbackBase*> BlockOtherFeedbacks;

public:
	DBDGAMEPLAY_API FBlockFeedbackStyleOverride();
};

FORCEINLINE uint32 GetTypeHash(const FBlockFeedbackStyleOverride) { return 0; }
