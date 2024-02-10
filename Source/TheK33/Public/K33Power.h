#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "TunableStat.h"
#include "Templates/SubclassOf.h"
#include "K33Power.generated.h"

class UInteractor;
class UChargeableComponent;
class UK33TurretDamageComponent;
class UK33PowerChargePresentationItemProgressComponent;
class UK33TailAttackInteraction;
class UBoxPlayerOverlapComponent;
class UK33KillerTunnelStateComponent;
class UPowerChargeComponent;
class UActorPoolInitializer;
class ULocalActorPoolComponent;
class UStatusEffect;
class UK33QuadrupedComponent;
class UK33KillerControlStationSelectorComponent;
class UK33SurvivorDetectionComponent;
class UK33TurretPlacer;
class AK33Husk;
class AK33FeetVFX;
class UAuthoritativeActorPoolComponent;

UCLASS()
class AK33Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UChargeableComponent* _tailAttackChargeableComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UInteractor* _interactor;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UBoxPlayerOverlapComponent* _interactionVolume;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _tailAttackChargeTime;

private:
	UPROPERTY(Transient, Export)
	UK33PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgress;

	UPROPERTY(Transient, Export)
	UPowerChargeComponent* _k33PowerCharge;

	UPROPERTY(Transient, Export)
	ULocalActorPoolComponent* _feetActorPool;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _killerStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _survivorStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33KillerTunnelStateComponent> _killerTunnelComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33QuadrupedComponent> _quadrupedComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33KillerControlStationSelectorComponent> _controlStationSelectorComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33SurvivorDetectionComponent> _survivorDetectionComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33TurretDamageComponent> _turretDamageComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK33TurretPlacer> _turretPlacerComponentClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK33Husk> _k33HuskClass;

	UPROPERTY(ReplicatedUsing=OnRep_TurretPlacers, Export)
	TArray<UK33TurretPlacer*> _turretPlacers;

	UPROPERTY(EditDefaultsOnly)
	uint32 _feetPoolSize;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<AK33FeetVFX> _feetActorClass;

	UPROPERTY(Transient)
	AK33Husk* _k33Husk;

	UPROPERTY(EditDefaultsOnly, Export)
	UActorPoolInitializer* _turretPoolInitializer;

	UPROPERTY(EditDefaultsOnly, Export)
	UAuthoritativeActorPoolComponent* _turretPool;

private:
	UFUNCTION()
	void OnRep_TurretPlacers();

public:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UK33TailAttackInteraction* GetTailAttackInteraction();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK33Power();
};

FORCEINLINE uint32 GetTypeHash(const AK33Power) { return 0; }
