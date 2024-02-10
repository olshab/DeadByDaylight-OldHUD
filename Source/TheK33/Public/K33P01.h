#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameEventData.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "K33P01.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkActivationTime;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownTime;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _blindedEffectDuration;

	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _activatedSurvivors;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(ACamperPlayer* survivor);

public:
	UFUNCTION(BlueprintPure)
	float GetPerkCooldownTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPerkActivationTime() const;

	UFUNCTION(BlueprintPure)
	float GetBlindedEffectDurationAtLevel() const;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ACamperPlayer* survivorPlayer);

private:
	UFUNCTION()
	void Authority_OnHealthStateChanged(const FGameplayTag gameplayTag, const FGameEventData& gameEventData);

public:
	UK33P01();
};

FORCEINLINE uint32 GetTypeHash(const UK33P01) { return 0; }
