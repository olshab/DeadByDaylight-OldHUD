#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAimingCrosshairState.h"
#include "AimingCrosshairComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAimingCrosshairComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable)
	void Server_SetCosmetics(const EAimingCrosshairState aimingCrosshairState, const float progress);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCosmetics(const EAimingCrosshairState aimingCrosshairState, const float progress);

public:
	UAimingCrosshairComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAimingCrosshairComponent) { return 0; }
