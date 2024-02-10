#pragma once

#include "CoreMinimal.h"
#include "GameplaySpawnerComponent.h"
#include "SpecialBehaviourGameplaySpawnerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API USpecialBehaviourGameplaySpawnerComponent : public UGameplaySpawnerComponent
{
	GENERATED_BODY()

public:
	USpecialBehaviourGameplaySpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpecialBehaviourGameplaySpawnerComponent) { return 0; }
