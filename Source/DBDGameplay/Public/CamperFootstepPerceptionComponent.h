#pragma once

#include "CoreMinimal.h"
#include "PlayerFootstepPerceptionComponent.h"
#include "CamperFootstepPerceptionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCamperFootstepPerceptionComponent : public UPlayerFootstepPerceptionComponent
{
	GENERATED_BODY()

public:
	UCamperFootstepPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCamperFootstepPerceptionComponent) { return 0; }
