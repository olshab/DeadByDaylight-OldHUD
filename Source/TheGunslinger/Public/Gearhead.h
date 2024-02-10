#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ESkillCheckType.h"
#include "Templates/SubclassOf.h"
#include "ECamperDamageState.h"
#include "Gearhead.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UGearhead : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealToKillerEffect;

	UPROPERTY(EditDefaultsOnly)
	float _surviorAuraDurations;

	UPROPERTY(EditDefaultsOnly)
	float _perkDuration;

	UPROPERTY(EditDefaultsOnly)
	ESkillCheckType _skillCheckType;

	UPROPERTY(EditDefaultsOnly)
	bool _basicAttack;

private:
	UFUNCTION()
	void Authority_OnCamperRemoved(ACamperPlayer* removedPlayer);

	UFUNCTION()
	void Authority_OnCamperHealthStateChange(ECamperDamageState oldDamageState, ECamperDamageState newDamageState);

public:
	UGearhead();
};

FORCEINLINE uint32 GetTypeHash(const UGearhead) { return 0; }
