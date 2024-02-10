#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MapSpecificGameStateComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UMapSpecificGameStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UMapSpecificGameStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UMapSpecificGameStateComponent) { return 0; }
