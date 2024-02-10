#pragma once

#include "CoreMinimal.h"
#include "Collectable.h"
#include "K33Turret.generated.h"

class USpherePlayerOverlapComponent;
class UDropItemInteraction;
class UAuthoritativePoolableActorComponent;
class UMaterialHelper;
class UCollectItemInteraction;
class USceneComponent;
class UDBDOutlineComponent;
class UInteractor;
class UK33TurretOutlineUpdateStrategy;
class UChargeableComponent;
class UStateController;
class UMontagePlayer;
class UAnimationMontageSlave;
class UBoxComponent;
class UK33TurretDangerPredictionComponent;
class UDBDNavModifierComponent;

UCLASS()
class THEK33_API AK33Turret : public ACollectable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	USceneComponent* _rootComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	USpherePlayerOverlapComponent* _interactableZone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _turretInteractor;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDropItemInteraction* _dropInteraction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UCollectItemInteraction* _collectInteraction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UMaterialHelper* _materialHelper;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UK33TurretOutlineUpdateStrategy* _turretOutlineUpdateStrategy;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UChargeableComponent* _turretRepairChargeable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UBoxComponent* _turretCollision;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UBoxComponent* _tailAttackCollision;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UK33TurretDangerPredictionComponent* _dangerPredictionComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UDBDNavModifierComponent* _navModifierComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	USceneComponent* _laserRoot;

private:
	UPROPERTY(Transient, Export)
	UAuthoritativePoolableActorComponent* _poolableActorComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UStateController* _turretStateController;

	UPROPERTY(EditDefaultsOnly)
	FName _detectionSocketName;

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateTurretVolumeRTPC(const int32 turretsInRangeCount);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateMotionTrackerSoundVolume(const float distanceToKiller);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateLaserLength(const float laserLength);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretHeatChanged(float heatAmount);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretDetectionRangeChanged(float newRange);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnKillerEnteredSpecialModeFXReaction();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_BipMotionTrackerFX(const float distanceToKiller);

public:
	AK33Turret();
};

FORCEINLINE uint32 GetTypeHash(const AK33Turret) { return 0; }
