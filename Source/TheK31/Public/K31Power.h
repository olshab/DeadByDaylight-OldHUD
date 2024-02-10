#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "Collectable.h"
#include "StatProperty.h"
#include "Templates/SubclassOf.h"
#include "EK31PowerState.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "K31Power.generated.h"

class UActorPoolInitializer;
class UK31Scanner;
class UCurveFloat;
class UStatusEffect;
class UK31PowerChargePresentationItemProgressComponent;
class UK31PowerChargePresentationPowerFadeComponent;
class UK31SurvivorDetection;
class UInteractor;
class UAuthoritativeActorPoolComponent;
class UK31SurvivorClawTrapComponent;
class UTimerObject;

UCLASS()
class THEK31_API AK31Power : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UK31PowerChargePresentationItemProgressComponent* _powerChargePresentationItemProgressComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UK31PowerChargePresentationPowerFadeComponent* _powerChargePresentationPowerFadeComponent;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK31SurvivorDetection> _survivorDetectionClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectSpawnData> _effects;

	UPROPERTY(Transient, Export)
	UStatusEffect* _authority_scannerHasteEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _scannerHasteEffectClass;

	UPROPERTY(VisibleAnywhere, Export)
	UInteractor* _interactor;

	UPROPERTY(EditDefaultsOnly, Export)
	UActorPoolInitializer* _dronePoolInitializer;

	UPROPERTY(VisibleAnywhere, Export)
	UAuthoritativeActorPoolComponent* _dronePool;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UK31Scanner* _scanner;

	UPROPERTY(ReplicatedUsing=OnRepPowerState)
	EK31PowerState _powerState;

	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelper _effectSpawner;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UK31SurvivorClawTrapComponent> _survivorClawTrapComponentClass;

	UPROPERTY(ReplicatedUsing=OnRepPowerCooldownTimer, Export)
	UTimerObject* _powerCooldownTimer;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _powerCooldownDuration;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _hasteCurveBasedOnScannedSurvivors;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _canRecallDisabledDrones;

private:
	UFUNCTION()
	void OnRepPowerState() const;

	UFUNCTION()
	void OnRepPowerCooldownTimer();

	UFUNCTION()
	void Authority_UpdateHasteBasedOnScannedSurvivors() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK31Power();
};

FORCEINLINE uint32 GetTypeHash(const AK31Power) { return 0; }
