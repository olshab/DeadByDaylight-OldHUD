#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Babysitter.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UBabysitter : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _scratchMarkHidingTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _showAuraTime;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _cooldownTime;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _perkEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetShowAuraTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetScratchMarkHidingTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetCooldownTimeAtLevel() const;

public:
	UBabysitter();
};

FORCEINLINE uint32 GetTypeHash(const UBabysitter) { return 0; }
