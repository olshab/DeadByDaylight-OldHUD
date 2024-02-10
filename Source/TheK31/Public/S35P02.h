#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "S35P02.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK31_API US35P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _hasteEffectDurationSeconds;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteEffectClass;

	UPROPERTY(Transient, Export)
	TMap<ADBDPlayer*, UStatusEffect*> _survivorBuffs;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationAtLevel() const;

public:
	US35P02();
};

FORCEINLINE uint32 GetTypeHash(const US35P02) { return 0; }
