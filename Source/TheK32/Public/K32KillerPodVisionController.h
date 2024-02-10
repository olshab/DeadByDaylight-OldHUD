#pragma once

#include "CoreMinimal.h"
#include "SpectatingActorLinker.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "K32KillerPodVisionController.generated.h"

class AK32KillerPod;
class UCameraComponent;
class ASlasherPlayer;
class UInteractionDefinition;

UCLASS()
class AK32KillerPodVisionController : public AActor, public ISpectatingActorLinker
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _allowedInteractionSemancticsWithPodVision;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _allowedPodVisionInteractionSemanctic;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podViewPitchMinimum;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _podViewPitchMaximum;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _collisionDisableTime;

	UPROPERTY(EditDefaultsOnly)
	float _observerRotationSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _minTimeBetweenCameraRotationUpdateRPC;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UCameraComponent* _camera;

private:
	UPROPERTY(ReplicatedUsing=OnRep_HasVisionFromKillerPod)
	bool _hasVisionFromKillerPod;

private:
	UFUNCTION(Server, Reliable)
	void Server_TakeControlOfPod(AK32KillerPod* killerPodToBeControlled);

	UFUNCTION(Server, Unreliable)
	void Server_SetCameraOrientation(FRotator newOrientation);

	UFUNCTION(Server, Reliable)
	void Server_ReleaseControlOfPods();

	UFUNCTION()
	void OnRep_HasVisionFromKillerPod();

	UFUNCTION()
	void OnKillerSet(ASlasherPlayer* killer);

	UFUNCTION()
	void OnKillerLocallyObservedChanged(const bool isKillerLocallyObserved);

	UFUNCTION()
	void OnInteractionStarted(UInteractionDefinition* interaction);

	UFUNCTION()
	void OnControlledPodUnacquiredFromPool(const bool isAcquired);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetLocationAndRotation(const FVector& location);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SetKillerCollisionDisabledForSurvivors(const bool isDisabled);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_SetCameraOrientation(FRotator newOrientation);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_OnControlledPodDisabledChanged(const bool isDisabled);

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnTakingControlOfPod();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnReleasingControlOfPod();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_Local_OnCurrentPodDisabledChanged(const bool isDisabled);

private:
	UFUNCTION()
	void Authority_OnControlledPodDisabledChanged(const bool isDisabled);

	UFUNCTION()
	void Authority_OnCollisionDisableTimerComplete();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK32KillerPodVisionController();
};

FORCEINLINE uint32 GetTypeHash(const AK32KillerPodVisionController) { return 0; }
