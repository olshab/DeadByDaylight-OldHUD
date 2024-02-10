#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshActorBudgeted.h"
#include "EnvironmentAnimatedObject.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AEnvironmentAnimatedObject : public ASkeletalMeshActorBudgeted
{
	GENERATED_BODY()

public:
	AEnvironmentAnimatedObject();
};

FORCEINLINE uint32 GetTypeHash(const AEnvironmentAnimatedObject) { return 0; }
