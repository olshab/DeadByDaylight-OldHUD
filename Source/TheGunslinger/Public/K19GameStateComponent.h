#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K19GameStateComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UK19GameStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UK19GameStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK19GameStateComponent) { return 0; }
