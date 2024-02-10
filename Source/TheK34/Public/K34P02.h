#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K34P02.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK34P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposedStatusEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _exposedStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorAuraRevealClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _survivorAuraRevealEffect;

	UPROPERTY(EditDefaultsOnly)
	float _exposedEffectTime;

	UPROPERTY(EditDefaultsOnly)
	float _auraRevealEffectTime;

protected:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_RevealAndMakeSurvivorScream(ACamperPlayer* survivor);

	UFUNCTION(BlueprintImplementableEvent)
	void BP_RevealAndMakeSurvivorScream(ACamperPlayer* survivorPlayer);

public:
	UK34P02();
};

FORCEINLINE uint32 GetTypeHash(const UK34P02) { return 0; }
