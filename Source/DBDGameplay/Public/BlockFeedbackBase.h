#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlockFeedbackBase.generated.h"

UCLASS(Abstract)
class DBDGAMEPLAY_API ABlockFeedbackBase : public AActor
{
	GENERATED_BODY()

public:
	ABlockFeedbackBase();
};

FORCEINLINE uint32 GetTypeHash(const ABlockFeedbackBase) { return 0; }
