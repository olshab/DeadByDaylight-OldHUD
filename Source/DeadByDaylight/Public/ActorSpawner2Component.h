#pragma once

#include "CoreMinimal.h"
#include "Components/ChildActorComponent.h"
#include "ActorSpawner2Component.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorSpawner2Component : public UChildActorComponent
{
	GENERATED_BODY()

public:
	UActorSpawner2Component();
};

FORCEINLINE uint32 GetTypeHash(const UActorSpawner2Component) { return 0; }
