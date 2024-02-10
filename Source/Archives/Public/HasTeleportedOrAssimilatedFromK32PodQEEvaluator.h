#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasTeleportedOrAssimilatedFromK32PodQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHasTeleportedOrAssimilatedFromK32PodQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UHasTeleportedOrAssimilatedFromK32PodQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasTeleportedOrAssimilatedFromK32PodQEEvaluator) { return 0; }
