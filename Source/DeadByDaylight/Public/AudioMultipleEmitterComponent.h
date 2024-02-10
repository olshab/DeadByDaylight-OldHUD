#pragma once

#include "CoreMinimal.h"
#include "AkComponent.h"
#include "AudioMultipleEmitterComponent.generated.h"

class UActorComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAudioMultipleEmitterComponent : public UAkComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(VisibleAnywhere, Export)
	TArray<UActorComponent*> EmitterActorsComponents;

public:
	UAudioMultipleEmitterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAudioMultipleEmitterComponent) { return 0; }
