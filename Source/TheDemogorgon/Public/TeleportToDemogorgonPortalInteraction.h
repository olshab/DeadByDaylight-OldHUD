#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "TeleportToDemogorgonPortalInteraction.generated.h"

class UDemogorgonPortalTargetingComponent;
class UStatusEffect;
class ADBDPlayer;
class ASlasherPlayer;
class UDemogorgonPortalPlacerStateComponent;
class ADemogorgonPortal;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UTeleportToDemogorgonPortalInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _teleportToPortalSoundRange;

	UPROPERTY(EditDefaultsOnly)
	float _inputReleaseChargePercentAllowance;

private:
	UPROPERTY(EditAnywhere)
	float _enterPortalPhaseDuration;

	UPROPERTY(EditAnywhere)
	float _cancelTeleportingPhaseDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _redMossStatusEffectClass;

	UPROPERTY(Transient, Export)
	UDemogorgonPortalTargetingComponent* _portalTargetingComponent;

	UPROPERTY(Transient, Export)
	UDemogorgonPortalPlacerStateComponent* _portalPlacerState;

	UPROPERTY(Transient)
	ADemogorgonPortal* _startingPortal;

	UPROPERTY(Transient)
	ADemogorgonPortal* _targetedPortal;

	UPROPERTY(Transient)
	ADBDPlayer* _interactingPlayer;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnTeleportInteractionCanceledVFX();

private:
	UFUNCTION()
	void OnSlasherSet(ASlasherPlayer* killer);

	UFUNCTION()
	void OnLocallyObservedChanged(const bool isKillerLocallyObserved);

public:
	UTeleportToDemogorgonPortalInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UTeleportToDemogorgonPortalInteraction) { return 0; }
