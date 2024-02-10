#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "Interactable.h"
#include "EControlStationState.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "K33ControlStation.generated.h"

class UDBDSkeletalMeshComponentBudgeted;
class UK33ControlStationTurretSpawnerOutlineUpdateStrategy;
class UBoxComponent;
class AK33ExitTunnelInteractable;
class UInteractor;
class UDBDOutlineComponent;
class UK33ControlStationTunnelEntranceOutlineUpdateStrategy;
class AK33TunnelBlock;
class UMontagePlayer;
class UAnimationMontageSlave;
class AK33Turret;

UCLASS()
class THEK33_API AK33ControlStation : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent_TunnelEntranceSection;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent_turretSpawnerSection;

private:
	UPROPERTY(EditDefaultsOnly, Export)
	UK33ControlStationTurretSpawnerOutlineUpdateStrategy* _outlineStrategy_TurretSpawnerSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UK33ControlStationTunnelEntranceOutlineUpdateStrategy* _outlineStrategy_TunnelEntranceSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UDBDOutlineComponent* _outlineComponent_tunnelEntranceSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UDBDOutlineComponent* _outlineComponent_turretSpawnerSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UBoxComponent* _interactionCollisionZone;

	UPROPERTY(EditDefaultsOnly, Export)
	UInteractor* _interactor;

	UPROPERTY(Transient)
	AK33TunnelBlock* _linkedTunnelBlock;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<AK33ExitTunnelInteractable> _exitTunnelInteractableClass;

	UPROPERTY(ReplicatedUsing=OnRep_ExitTunnelInteractable, Transient)
	AK33ExitTunnelInteractable* _exitTunnelInteractable;

	UPROPERTY(EditDefaultsOnly, Export)
	UMontagePlayer* _montagePlayer_turretSpawnerSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UMontagePlayer* _montagePlayer_tunnelEntranceSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UAnimationMontageSlave* _animationSlave_turretSpawnerSection;

	UPROPERTY(EditDefaultsOnly, Export)
	UAnimationMontageSlave* _animationSlave_tunnelEntranceSection;

	UPROPERTY(Replicated, Transient)
	TWeakObjectPtr<AK33Turret> _linkedTurret;

	UPROPERTY(ReplicatedUsing=OnRep_CurrentState, Transient)
	EControlStationState _currentState;

	UPROPERTY(EditDefaultsOnly)
	FName _turretSocketName;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _spawningDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _turretAvailabilityCooldownDuration;

	UPROPERTY(Replicated)
	float _worldTimeAtCooldownStart;

	UPROPERTY(EditDefaultsOnly)
	float _malfunctionDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _blockExitTime;

	UPROPERTY(ReplicatedUsing=OnRep_IsMalfunctioning)
	bool _isMalfunctioning;

private:
	UFUNCTION()
	void OnRep_IsMalfunctioning();

	UFUNCTION()
	void OnRep_ExitTunnelInteractable();

	UFUNCTION()
	void OnRep_CurrentState(EControlStationState oldState);

public:
	UFUNCTION(BlueprintNativeEvent)
	FVector GetKillerExitTunnelEndLocation() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_UpdateControlStationCooldown(float cooldownElapsedTimePercent);

public:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StopControlStationMalfunctionReaction();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_StartControlStationMalfunctionReaction();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetTunnelCapVisibility(bool isVisible);

protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnTurretInPoolCountChanged(const int32 turretCount);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlStationExitingState(EControlStationState exitingState);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnControlStationEnteringState(EControlStationState enteringState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK33ControlStation();
};

FORCEINLINE uint32 GetTypeHash(const AK33ControlStation) { return 0; }
