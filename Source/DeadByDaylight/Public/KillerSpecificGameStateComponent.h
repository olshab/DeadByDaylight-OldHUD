#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KillerSpecificGameStateComponent.generated.h"

UCLASS(Abstract, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerSpecificGameStateComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UKillerSpecificGameStateComponent();
};

FORCEINLINE uint32 GetTypeHash(const UKillerSpecificGameStateComponent) { return 0; }
