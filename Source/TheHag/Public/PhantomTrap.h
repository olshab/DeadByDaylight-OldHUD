#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "Interactable.h"
#include "DBDTimer.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"
#include "PhantomTrap.generated.h"

class ADBDPlayer;
class USceneComponent;
class UWipeAwayPhantomTrapInteraction;
class UStatusEffect;
class ASlasherPlayer;
class ACamperPlayer;
class UChargeableComponent;
class USphereComponent;
class AActor;
class UTerrorRadiusEmitterComponent;
class UInteractor;
class UPrimitiveComponent;
class USkeletalMeshComponent;

UCLASS()
class THEHAG_API APhantomTrap : public AInteractable
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _phantomHasCollision;

	UPROPERTY(BlueprintReadOnly)
	bool _silentTrapTrigger;

	UPROPERTY(BlueprintReadWrite)
	bool _isDeactivating;

	UPROPERTY(BlueprintReadWrite)
	ADBDPlayer* _slasherOwner;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _slowdownInTrapZoneEffect;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitter;

	UPROPERTY(EditDefaultsOnly)
	float _camperOutlineDuration;

	UPROPERTY(EditAnywhere)
	float _lineOfSightTraceMinInterval;

	UPROPERTY(EditAnywhere)
	float _speedTolerance;

	UPROPERTY(Transient, Export)
	USceneComponent* _trapLocation;

	UPROPERTY(Transient, Export)
	USphereComponent* _triggerZone;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _survivorSlowdownEffects;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UChargeableComponent* _wipeAwayInteractionChargeable;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UWipeAwayPhantomTrapInteraction* _wipeAwayInteraction;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UInteractor* _wipeAwayInteractor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UPrimitiveComponent* _wipeAwayInteractionZone;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _wipeAwayTimeDuration;

	UPROPERTY(Replicated)
	bool _hasTrapBeenSetOff;

	UPROPERTY(Replicated)
	bool _hasTrapBeenDestroyed;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isInUse;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	FDBDTimer _activeTimer;

	UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool _isSlasherHere;

private:
	UFUNCTION(BlueprintCallable)
	void SetIsInUse(bool inUse);

protected:
	UFUNCTION(BlueprintCallable)
	void RetrievePerkFlags(const FGameplayTag silentTrapTag, const FGameplayTag phantomCollisionTag);

	UFUNCTION(BlueprintCallable)
	void OnTrapReset();

	UFUNCTION(BlueprintCallable)
	void OnTrapActivated();

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_DestroyTrap(ACamperPlayer* playerDestroyingTrap);

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	bool IsTrapSet() const;

	UFUNCTION(BlueprintPure)
	bool IsTrapDeactivating() const;

	UFUNCTION(BlueprintPure)
	bool IsTrapActive() const;

	UFUNCTION(BlueprintPure)
	bool IsSilentTrigger() const;

protected:
	UFUNCTION(BlueprintCallable)
	void InitializeTerrorRadiusEmitter(ASlasherPlayer* owningSlasher);

public:
	UFUNCTION(BlueprintPure)
	bool HasKillerTeleported() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USceneComponent* GetPhantomTransform() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USkeletalMeshComponent* GetMesh() const;

protected:
	UFUNCTION(BlueprintCallable)
	bool CanActivateTrap(ACamperPlayer* camper, bool isInUse);

public:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnTrapDestroyed(ACamperPlayer* playerDestroyingTrap);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void BP_OnTrapActivate(ACamperPlayer* triggerer);

private:
	UFUNCTION()
	void Authority_OnTriggerZoneEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnTriggerZoneBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	UFUNCTION(BlueprintCallable)
	void ActivateSlasher(ASlasherPlayer* slasher);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	APhantomTrap();
};

FORCEINLINE uint32 GetTypeHash(const APhantomTrap) { return 0; }
