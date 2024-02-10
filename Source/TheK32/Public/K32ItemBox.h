#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "ContainsItemInterface.h"
#include "Interactable.h"
#include "EK32ItemBoxState.h"
#include "K32ItemBox.generated.h"

class UK32ItemBoxSpeedUpInteraction;
class ACollectable;
class ADBDPlayer;
class USceneComponent;
class UDBDOutlineComponent;
class UInteractor;
class UChargeableComponent;
class UPrimitiveComponent;
class UDBDSkeletalMeshComponentBudgeted;
class AActor;

UCLASS()
class THEK32_API AK32ItemBox : public AInteractable, public IContainsItemInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UChargeableComponent* _chargeable;

	UPROPERTY(ReplicatedUsing=OnRep_SpawnedItem, Transient)
	ACollectable* _spawnedItem;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	USceneComponent* _containingItemSpawnPoint;

	UPROPERTY(VisibleAnywhere, meta=(BindWidgetOptional))
	USceneComponent* _itemDropPoint;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_State)
	EK32ItemBoxState _state;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UK32ItemBoxSpeedUpInteraction* _itemBoxSpeedUpInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _interactor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _interactionZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDOutlineComponent* _outlineComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _skeletalMeshComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _inProgressDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _addon12ChargeTimeExtension;

	UPROPERTY(ReplicatedUsing=OnRep_IsSurvivorInteracting)
	bool _isSurvivorInteracting;

	UPROPERTY(Transient)
	ADBDPlayer* _survivorInteracting;

private:
	UFUNCTION()
	void OnRep_State();

	UFUNCTION()
	void OnRep_SpawnedItem();

	UFUNCTION()
	void OnRep_IsSurvivorInteracting();

	UFUNCTION()
	void OnChargeableCompleteEvent(bool completed, const TArray<AActor*>& instigatorsForCompletion);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetIsChargeTimeExtended(const bool isAddonExtendingFirstActivationTimer);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorInteractingChanged(bool isInteracting);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnStateChanged(EK32ItemBoxState newState);

private:
	UFUNCTION()
	void Authority_OnItemPickup(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32ItemBox();
};

FORCEINLINE uint32 GetTypeHash(const AK32ItemBox) { return 0; }
