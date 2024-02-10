#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "TurnLimitationStrategy.generated.h"

UCLASS()
class DBDGAMEPLAY_API UTurnLimitationStrategy : public UObject, public IViewRotationStrategy
{
	GENERATED_BODY()

public:
	UTurnLimitationStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UTurnLimitationStrategy) { return 0; }
