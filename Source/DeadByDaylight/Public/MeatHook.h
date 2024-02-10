#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AnimationMontageDescriptor.h"
#include "Interactable.h"
#include "AIInteractableTargetInterface.h"
#include "AIPointOfInterestTargetInterface.h"
#include "CharmAttachable.h"
#include "DBDTunableRowHandle.h"
#include "GameplayTagContainer.h"
#include "MeatHook.generated.h"

class UMontagePlayer;
class UAIPerceptionStimuliSourceComponent;
class UInteractor;
class UChargeableComponent;
class ACamperPlayer;
class USceneComponent;
class ADBDPlayer;
class AEntity;
class UCharacterPusherComponent;
class UPollableEventListener;
class UDBDClipRegionComponent;
class UCapsuleComponent;
class UCurveFloat;
class UChargeableInteractionDefinition;
class UMapActorComponent;
class ACharacter;
class UAkComponent;
class UBoxComponent;
class UPrimitiveComponent;
class UHookableComponent;

UCLASS()
class DEADBYDAYLIGHT_API AMeatHook : public AInteractable, public IAIInteractableTargetInterface, public IAIPointOfInterestTargetInterface, public ICharmAttachable
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	bool WasSurvivorStruggleCancelled;

	UPROPERTY(BlueprintReadWrite)
	bool IsSacrificeEnabled;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FVector AIInteractionOffset;

protected:
	UPROPERTY(BlueprintReadWrite, Transient, Export)
	TArray<UDBDClipRegionComponent*> ClipRegions;

	UPROPERTY(BlueprintReadOnly)
	bool IsSurvivorStruggling;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsInBasement;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsBreakable;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	bool IsSabotageable;

	UPROPERTY(EditDefaultsOnly)
	bool CanBeScourgeHook;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayTag HookIdentityTag;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool SnapHookedCharacter;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool FullyHooked;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float _struggleThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, meta=(BindWidgetOptional))
	UCharacterPusherComponent* _characterPusher;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCapsuleComponent* _slasherCollisionBlocker;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(BindWidgetOptional))
	UCapsuleComponent* _conditionalSlasherCollisionBlocker;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FGameplayTagContainer _conditionalSlasherCollisionBlockerPresenceTags;

	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UChargeableComponent* _antiCampUnhookChargeable;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxSecondsToChargeAntiCampUnhook;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _antiCampUnhookXYDistanceToChargeCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _antiCampUnhookUpperZDistanceToChargeCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _antiCampUnhookLowerZDistanceToChargeCurve;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _stateTagsToApplyOnBeginPlay;

private:
	UPROPERTY(Transient, Export)
	UPollableEventListener* _eventListener;

	UPROPERTY(Transient)
	ACamperPlayer* _hookedSurvivor;

	UPROPERTY(Transient)
	ADBDPlayer* _hookBreakerPlayer;

	UPROPERTY(Transient)
	TSet<ACamperPlayer*> _campersThatSabotagedMeatHook;

	UPROPERTY(Transient, Export)
	UInteractor* _mainInteractor;

	UPROPERTY(Transient, Export)
	UChargeableInteractionDefinition* _unhook;

	UPROPERTY(Transient, Export)
	USceneComponent* _camperHookedSnapTransform;

	UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
	AEntity* _entity;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UAIPerceptionStimuliSourceComponent* _perceptionStimuliComponent;

	UPROPERTY(Transient)
	ADBDPlayer* _interactingPlayer;

	UPROPERTY(Transient, Export)
	UMapActorComponent* _cachedMapActor;

	UPROPERTY(EditDefaultsOnly)
	float _antiCampGracePeriod;

protected:
	UFUNCTION(BlueprintCallable)
	void UpdateSlasherBlockerCollision();

public:
	UFUNCTION(BlueprintCallable)
	void SetMapActor(UMapActorComponent* value);

	UFUNCTION(BlueprintCallable)
	void SetIsBeingSabotaged(bool isBeingSabotaged);

	UFUNCTION(BlueprintCallable)
	void SetInteractingPlayer(ADBDPlayer* interactingPlayer);

protected:
	UFUNCTION(BlueprintCallable)
	void SetEntity(AEntity* entity);

	UFUNCTION(BlueprintImplementableEvent)
	void OnTickStruggle(float deltaTime);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void OnStruggleSkillCheckFailed_Cosmetic();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStruggleExit();

	UFUNCTION(BlueprintImplementableEvent)
	void OnStruggleEnter();

private:
	UFUNCTION()
	void OnStopPushingPlayer(ACharacter* character);

	UFUNCTION()
	void OnStartPushingPlayer(ACharacter* character);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSacrificeOut();

	UFUNCTION(BlueprintImplementableEvent)
	void OnSacrificeIn();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReactionIn();

	UFUNCTION(BlueprintImplementableEvent)
	void OnReaction();

	UFUNCTION(BlueprintImplementableEvent)
	void OnOwnerReplicated();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHookingExit();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHookingEnter();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHookedSurvivorChanged(ACamperPlayer* before, ACamperPlayer* after);

	UFUNCTION()
	void OnHookedSurvivorAttacked();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHookedIdle();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHookedExit();

	UFUNCTION(BlueprintImplementableEvent)
	void OnHookedEnter();

private:
	UFUNCTION()
	void OnEscapeDoorActivated();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnAutoRepair();

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetIsSacrificed(bool isSacrificed);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetIsSabotaged(bool setIsSabotaged, ADBDPlayer* hookBreaker, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetIsBrokenFromUnhook(bool setIsBrokendFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration);

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_SetHookedSurvivor(ACamperPlayer* survivor);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RefreshCharmCustomization();

public:
	UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
	void Multicast_EscapeAttemptResult(ADBDPlayer* player, bool result);

private:
	UFUNCTION()
	void Local_OnHookedSurvivorDrainStageChanged(const int32 drainStage, ADBDPlayer* target) const;

public:
	UFUNCTION(BlueprintCallable)
	void Local_MoveSurvivorToHook(ACamperPlayer* survivor, const float duration);

	UFUNCTION(BlueprintPure)
	FAnimationMontageDescriptor GetUnhookOutMontageDescriptor() const;

	UFUNCTION(BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetUnhookInteraction() const;

	UFUNCTION(BlueprintPure)
	FAnimationMontageDescriptor GetUnhookInMontageDescriptor() const;

	UFUNCTION(BlueprintPure)
	float GetStruggleThreshold() const;

	UFUNCTION(BlueprintPure)
	float GetStrugglePercent() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetSaboteurPlayer() const;

	UFUNCTION(BlueprintPure)
	float GetSabotageHookRespawnDuration() const;

	UFUNCTION(BlueprintPure)
	UMontagePlayer* GetMontagePlayer() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UAkComponent* GetMeatHookAkAudioComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UInteractor* GetMainInteractor() const;

	UFUNCTION(BlueprintPure)
	bool GetIsSacrificed() const;

	UFUNCTION(BlueprintPure)
	bool GetIsSabotaged() const;

	UFUNCTION(BlueprintPure)
	bool GetIsInBasement() const;

	UFUNCTION(BlueprintPure)
	bool GetIsBroken() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	UBoxComponent* GetInteractorZoneComponent() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	UPrimitiveComponent* GetInteractorPrimitiveComponent() const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetInteractingPlayer() const;

protected:
	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	FVector GetHookPosition() const;

public:
	UFUNCTION(BlueprintPure)
	ACamperPlayer* GetHookedSurvivor() const;

	UFUNCTION(BlueprintPure)
	UHookableComponent* GetHookableComponentOfHookedActor() const;

	UFUNCTION(BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetEscapeHookInteraction() const;

	UFUNCTION(BlueprintPure)
	UCharacterPusherComponent* GetCharacterPusher() const;

	UFUNCTION(BlueprintPure, BlueprintImplementableEvent)
	USceneComponent* GetCamperUnkookFocalPointTransform() const;

	UFUNCTION(BlueprintPure, BlueprintNativeEvent)
	USceneComponent* GetCamperHookedSnapTransform() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampMaxXYCurveDistanceTime() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampMaxUpperZCurveDistanceTime() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampMaxLowerZCurveDistanceTime() const;

	UFUNCTION(BlueprintPure)
	float GetAntiCampGracePeriod() const;

	UFUNCTION(BlueprintImplementableEvent)
	UChargeableInteractionDefinition* GetAntiCampEscapeHookInteraction() const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable, BlueprintImplementableEvent)
	void FireHookSoundEvent(const FName NoiseRangeTunable, const ADBDPlayer* soundInstigator) const;

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void DebugHookedSurvivor(ACamperPlayer* expectedSurvivor) const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_SetAsScourgeHookStart();

public:
	UFUNCTION(BlueprintPure)
	bool CanUnhookSurvivor(const ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	bool CanSurvivorStruggle(ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	bool CanSurvivorAttemptEscape(const ACamperPlayer* survivor) const;

	UFUNCTION(BlueprintPure)
	bool CanHookSurvivor() const;

	UFUNCTION(BlueprintPure)
	bool CanBeSabotaged() const;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void BroadcastUnhook(ADBDPlayer* rescuer);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_OnHookInteractionStarted();

public:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalUnhookingEnter();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalUnhookingCharged();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalUnhookingAborted();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalSurvivorAttemptingEscapeAborted();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SignalSurvivorAttemptingEscape();

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsSacrificed(bool isSacrificed);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsSabotaged(bool isSabotaged, ADBDPlayer* saboteur, bool useCamperHookRespawnDurationModifiers, float overrideBaseHookRespawnDuration);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_SetIsBrokenFromUnhook(bool isBrokenFromUnhook, ADBDPlayer* hookBreaker, float overrideBaseHookRespawnDuration);

	UFUNCTION(BlueprintCallable)
	void Authority_SetHookedSurvivor(ACamperPlayer* survivor);

public:
	AMeatHook();
};

FORCEINLINE uint32 GetTypeHash(const AMeatHook) { return 0; }
