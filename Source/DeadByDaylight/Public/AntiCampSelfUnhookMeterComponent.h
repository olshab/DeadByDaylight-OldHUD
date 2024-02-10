#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EAntiCampSelfUnhookMeterState.h"
#include "AntiCampSelfUnhookMeterComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UAntiCampSelfUnhookMeterComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION(Server, Reliable)
	void Server_SetCosmetics(const EAntiCampSelfUnhookMeterState aimingCrosshairState, const float progress);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetCosmetics(const EAntiCampSelfUnhookMeterState aimingCrosshairState, const float progress);

public:
	UFUNCTION(BlueprintPure)
	float GetProgress() const;

public:
	UAntiCampSelfUnhookMeterComponent();
};

FORCEINLINE uint32 GetTypeHash(const UAntiCampSelfUnhookMeterComponent) { return 0; }
