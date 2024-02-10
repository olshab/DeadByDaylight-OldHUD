#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "DBDGenericTeamAgentInterface.h"
#include "GameplayTagContainer.h"
#include "ECamperDamageState.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "Locker.generated.h"

class UChildActorComponent;
class UAnimationMontageSlave;
class UBoxComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class UAIPerceptionStimuliSourceComponent;
class UMontagePlayer;
class UInteractor;
class UInteractionDefinition;
class ULockerAnimInstance;
class ABaseLockerItem;
class ACamperPlayer;
class AActor;
class USkeletalMeshComponent;

UCLASS()
class DEADBYDAYLIGHT_API ALocker : public AInteractable, public IDBDGenericTeamAgentInterface
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInLockerChanged, ADBDPlayer*, playerWhoWasInLocker, ADBDPlayer*, playerNowInLocker);

public:
	UPROPERTY(BlueprintAssignable)
	FOnPlayerInLockerChanged OnPlayerInLockerChanged;

	UPROPERTY(EditAnywhere)
	float FastDoorActivationAudibleRange;

	UPROPERTY(EditAnywhere)
	float NormalDoorActivationAudibleRange;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UBoxComponent* _boxComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UAnimationMontageSlave* _montageFollower;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

	UPROPERTY(BlueprintReadOnly, Transient)
	ADBDPlayer* _playerOpeningLocker;

	UPROPERTY(BlueprintReadOnly, Transient)
	ADBDPlayer* _playerInLocker;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractor* _mainInteractor;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPrimitiveComponent* _frontInteractionZone;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _searchEmpty;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _searchPlayer;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UChildActorComponent* _killerInteractionActor;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UInteractionDefinition* _enterSneak;

	UPROPERTY(EditDefaultsOnly)
	FName _camperSocket;

private:
	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	ULockerAnimInstance* _lockerAnimInstance;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _interactionExitClosetSemantics;

	UPROPERTY(ReplicatedUsing=OnRep_PreventAllInteractions, Transient)
	bool _preventAllInteractions;

	UPROPERTY(Transient)
	bool _local_preventAllInteractions;

	UPROPERTY(Replicated, Transient)
	ABaseLockerItem* _spawnedLockerItem;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StopMinNearOutlineDistLerp(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void StartMinNearOutlineDistLerp(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void SetSurvivorInLocker(ACamperPlayer* survivor);

	UFUNCTION(BlueprintCallable)
	void SetPlayerOpeningLocker(ADBDPlayer* player);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetPlayerInLockerVisibility(const bool isVisible) const;

private:
	UFUNCTION()
	void OnSurvivorHealthChanged(ECamperDamageState before, ECamperDamageState after);

	UFUNCTION()
	void OnSurvivorEndPlay(AActor* actor, TEnumAsByte<EEndPlayReason::Type> endPlayReason);

	UFUNCTION()
	void OnRep_PreventAllInteractions();

public:
	UFUNCTION(NetMulticast, Reliable, WithValidation)
	void Multicast_EjectSurvivor();

	UFUNCTION(BlueprintPure)
	bool IsOccupied() const;

	UFUNCTION(BlueprintPure)
	bool IsFacingLocker(const ADBDPlayer* player, float toleranceDegreeAngle) const;

	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetSurvivorInLocker() const;

	UFUNCTION(BlueprintNativeEvent)
	UPrimitiveComponent* GetStunZone() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerInLocker() const;

	UFUNCTION(BlueprintPure)
	FVector GetPlayerInClosetLocation();

	UFUNCTION(BlueprintPure)
	USkeletalMeshComponent* GetMesh() const;

	UFUNCTION(BlueprintPure)
	UInteractionDefinition* GetLockerHideEnterSneakInteraction() const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetInteractor() const;

	UFUNCTION(BlueprintPure)
	AActor* GetChildInteractionActor() const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void EjectSurvivor();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_ReportOpenLockerNoiseEventToAI(const bool fastActivation);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_EnableOtherInteractors(const UInteractor* usableInteractor, bool usable);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ALocker();
};

FORCEINLINE uint32 GetTypeHash(const ALocker) { return 0; }
