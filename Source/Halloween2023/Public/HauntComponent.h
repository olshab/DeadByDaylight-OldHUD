#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "EHalloweenWorldType.h"
#include "EPlayerRole.h"
#include "EOfferingEffectType.h"
#include "HauntComponent.generated.h"

class ADBDPlayer;
class UPlayersInZoneTracker;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class HALLOWEEN2023_API UHauntComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerRoleEvent, const EPlayerRole, playerRole);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerInteract, ADBDPlayer*, player);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnHauntInteractionChange, const EPlayerRole, playerRole, bool, isInteractable);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHauntEvent);

protected:
	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract Cosmetic_PlayerEnterHauntRadius;

	UPROPERTY(BlueprintAssignable)
	FOnPlayerInteract Cosmetic_PlayerLeavesHauntRadius;

	UPROPERTY(BlueprintAssignable)
	FOnHauntInteractionChange Cosmetic_EnableHauntForInteraction;

	UPROPERTY(Replicated)
	EPlayerRole _winningPlayerRole;

	UPROPERTY(ReplicatedUsing=OnRep_IsInteractable)
	bool _isInteractable;

	UPROPERTY(EditDefaultsOnly)
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stateTagsPreventingInteraction;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPlayersInZoneTracker* _slasherInZoneTracker;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UPlayersInZoneTracker* _survivorsInZoneTracker;

protected:
	UFUNCTION()
	void OnRep_IsInteractable();

	UFUNCTION()
	void OnPlayerLeftZone(ADBDPlayer* player);

	UFUNCTION()
	void OnPlayerEnterZone(ADBDPlayer* player);

	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnEventComponentsCreated();

public:
	UFUNCTION(BlueprintPure)
	EHalloweenWorldType GetHalloweenWorldType() const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UHauntComponent();
};

FORCEINLINE uint32 GetTypeHash(const UHauntComponent) { return 0; }
