#pragma once

#include "CoreMinimal.h"
#include "PlayerFootstepPerceptionComponent.h"
#include "KillerFootstepPerceptionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UKillerFootstepPerceptionComponent : public UPlayerFootstepPerceptionComponent
{
	GENERATED_BODY()

public:
	UKillerFootstepPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerFootstepPerceptionComponent) { return 0; }
