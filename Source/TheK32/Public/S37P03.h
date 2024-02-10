#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S37P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class US37P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	int32 _maxTokens;

	UPROPERTY(EditDefaultsOnly)
	int32 _repairSpeedDebuffTime;

	UPROPERTY(EditDefaultsOnly)
	float _repairSpeedDebuffAmount;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _allowSearchChestForToolboxEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _repairSpeedDebuffEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _allowSearchChestForToolboxEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetRepairSpeedDebuffTimeAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetRepairSpeedDebuffAmount() const;

public:
	US37P03();
};

FORCEINLINE uint32 GetTypeHash(const US37P03) { return 0; }
