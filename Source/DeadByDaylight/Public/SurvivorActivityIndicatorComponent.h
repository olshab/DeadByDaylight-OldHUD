#pragma once

#include "CoreMinimal.h"
#include "SurvivorActivity.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "ECamperDamageState.h"
#include "GameEventData.h"
#include "SurvivorActivityIndicatorComponent.generated.h"

class ADBDPlayer;
class USurvivorActivityData;
class UChargeableComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorActivityIndicatorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	USurvivorActivityData* _activitiesDataAsset;

	UPROPERTY(EditDefaultsOnly)
	float _durationNeededToEnableUI;

private:
	UFUNCTION()
	void OnPlayerPickedUp(ADBDPlayer* picker);

	UFUNCTION()
	void OnPlayerDropped();

	UFUNCTION()
	void OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

	UFUNCTION()
	void OnChargeableProgressChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnCamperEscape();

	UFUNCTION()
	void HandleStartActivityIfStillInEffect(const FSurvivorActivity activityViewInfo);

	UFUNCTION()
	void Authority_OnCamperEscape(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	USurvivorActivityIndicatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorActivityIndicatorComponent) { return 0; }
