#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Premonition.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UPremonition : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkFrequency;

	UPROPERTY(EditDefaultsOnly)
	float _perkEffectRange;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPerkActivate();

public:
	UFUNCTION(BlueprintPure)
	float GetPerkFrequencyAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetPerkEffectRange() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnPerkActivate();

public:
	UPremonition();
};

FORCEINLINE uint32 GetTypeHash(const UPremonition) { return 0; }
