#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "K32KillerPodTargetingComponent.generated.h"

class AK32KillerPod;

UCLASS(Blueprintable, EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodTargetingComponent : public UActorComponent
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_NewKillerPodTargeted(AK32KillerPod* newTarget);

public:
	UK32KillerPodTargetingComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodTargetingComponent) { return 0; }
