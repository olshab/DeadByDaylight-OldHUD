#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "K25P03.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hemorrhageEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _mangledEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _K25P03SurvivorStateTwoEffect;

	UPROPERTY(Transient)
	int32 _numberOfSurvivorsWaitingForDamageStateChange;

	UPROPERTY(EditDefaultsOnly)
	float _state2ActionSpeedDebuffPercentage;

private:
	UFUNCTION()
	void OnSurvivorRemoved(ACamperPlayer* survivor);

	UFUNCTION()
	void OnDamageStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

	UFUNCTION()
	void OnCamperUnhookedFromScourgeHook(const FGameEventData& gameEventData);

public:
	UFUNCTION(BlueprintPure)
	float GetActionSpeedDebuffPercentageAtLevel() const;

public:
	UK25P03();
};

FORCEINLINE uint32 GetTypeHash(const UK25P03) { return 0; }
