#pragma once

#include "CoreMinimal.h"
#include "GameplaySpawnerComponent.h"
#include "MutatorGameplaySpawnerComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMutatorGameplaySpawnerComponent : public UGameplaySpawnerComponent
{
	GENERATED_BODY()

public:
	UMutatorGameplaySpawnerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMutatorGameplaySpawnerComponent) { return 0; }
