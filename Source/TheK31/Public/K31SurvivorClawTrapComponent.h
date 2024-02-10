#pragma once

#include "CoreMinimal.h"
#include "K31UIDataInterface.h"
#include "GameplayTagContainer.h"
#include "StatProperty.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ECamperDamageState.h"
#include "ClawTrapUntrapDatum.h"
#include "K31SurvivorClawTrapComponent.generated.h"

class UTimerObject;
class UK31PlayerZoneStatus;
class USurvivorRemoveClawTrapInteraction;
class AK31Power;
class AK31Drone;
class AK31ClawTrap;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class THEK31_API UK31SurvivorClawTrapComponent : public UActorComponent, public IK31UIDataInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient, Export)
	UTimerObject* _batteryChargeTimer;

	UPROPERTY(ReplicatedUsing=OnRep_OriginatingPower)
	AK31Power* _originatingPower;

	UPROPERTY(ReplicatedUsing=OnRep_IsTrapped)
	bool _isTrapped;

	UPROPERTY(ReplicatedUsing=OnRep_IsBroadcasting)
	bool _isBroadcasting;

	UPROPERTY(ReplicatedUsing=OnRep_RemoveClawTrapInteraction, Export)
	USurvivorRemoveClawTrapInteraction* _removeClawTrapInteraction;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USurvivorRemoveClawTrapInteraction> _removeClawTrapInteractionClass;

	UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
	AK31ClawTrap* _clawTrap;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK31ClawTrap> _clawTrapClass;

	UPROPERTY(EditDefaultsOnly)
	float _clawTrapCosmeticDelayDuration;

	UPROPERTY(EditAnywhere)
	FName _clawTrapAttachSocket;

	UPROPERTY(Transient, Export)
	UK31PlayerZoneStatus* _authority_playerZoneStatus;

	UPROPERTY(Transient)
	FClawTrapUntrapDatum _lastUntrapDatum;

	UPROPERTY(Replicated)
	bool _wasLastRemovedAutomatically;

	UPROPERTY(Transient)
	AK31Drone* _authority_originatingDrone;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _batteryMaxCharge;

private:
	UFUNCTION()
	void OnRep_RemoveClawTrapInteraction();

	UFUNCTION()
	void OnRep_OriginatingPower(AK31Power* oldPower);

	UFUNCTION()
	void OnRep_IsTrapped();

	UFUNCTION()
	void OnRep_IsBroadcasting();

	UFUNCTION()
	void OnIntroCompleted();

	UFUNCTION()
	void OnCamperEscaped(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ClawTrapAddedByDrone(AK31Drone* originatingDrone);

public:
	UFUNCTION(BlueprintPure)
	float GetClawTrapCosmeticDelayDuration() const;

private:
	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK31SurvivorClawTrapComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK31SurvivorClawTrapComponent) { return 0; }
