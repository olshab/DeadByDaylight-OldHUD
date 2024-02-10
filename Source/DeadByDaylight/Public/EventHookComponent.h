#pragma once

#include "CoreMinimal.h"
#include "EventObjectComponent.h"
#include "GameplayTagContainer.h"
#include "EOfferingEffectType.h"
#include "EventHookComponent.generated.h"

class ADBDPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventHookComponent : public UEventObjectComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _hookedOnEventHookScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _hookedOnEventHookNoOfferingScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	EOfferingEffectType _offeringEffectTypeNeeded;

	UPROPERTY(EditDefaultsOnly)
	bool _rewardScoreOnFirstHookOnly;

	UPROPERTY(EditAnywhere)
	bool _updateOutlineForSurvivor;

	UPROPERTY(EditAnywhere)
	bool _updateOutlineForSlasher;

public:
	UFUNCTION(BlueprintCallable)
	void SetOutlineCarryingColorToDefault();

private:
	UFUNCTION()
	void Authority_FireHookedScoreEvent(ADBDPlayer* hookedPlayer);

public:
	UEventHookComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventHookComponent) { return 0; }
