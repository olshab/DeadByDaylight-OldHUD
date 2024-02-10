#pragma once

#include "CoreMinimal.h"
#include "HasRecentEventHappenedWhileInStateTagCondition.h"
#include "HasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod.generated.h"

UCLASS()
class ARCHIVES_API UHasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod : public UHasRecentEventHappenedWhileInStateTagCondition
{
	GENERATED_BODY()

public:
	UHasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod();
};

FORCEINLINE uint32 GetTypeHash(const UHasRecentlyDeployedK32PodWhileInChaseAndEventFromSamePod) { return 0; }
