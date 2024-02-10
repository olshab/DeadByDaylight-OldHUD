#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "UObject/NoExportTypes.h"
#include "AnimationMontageDescriptor.h"
#include "DBDTunableRowHandle.h"
#include "K33EnterTunnelInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33EnterTunnelInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _confirmEnterControlStationMontage;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _cancelMontage;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _afterTeleportationMontage;

	UPROPERTY(EditDefaultsOnly)
	FVector _cameraTransitionOffset;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chargeInteractionTime;

	UPROPERTY(EditDefaultsOnly)
	float _hideWorldElementsMontagePercentageTime;

	UPROPERTY(EditDefaultsOnly)
	float _fadeOutDuration;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_TeleportPlayerToTunnel(ADBDPlayer* player, const FVector& location, const FRotator& rotation);

public:
	UK33EnterTunnelInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33EnterTunnelInteraction) { return 0; }
