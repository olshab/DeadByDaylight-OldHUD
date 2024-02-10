#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayMutator.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class UGameplayMutator : public UActorComponent
{
	GENERATED_BODY()

public:
	UGameplayMutator();
};

FORCEINLINE uint32 GetTypeHash(const UGameplayMutator) { return 0; }
