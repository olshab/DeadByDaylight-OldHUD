#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K28P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28P02 : public UPerk
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float PerkActivationTime;

	UPROPERTY(EditDefaultsOnly)
	float LockerDetectionRadius;

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealToKillerEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetPerkActivationTime() const;

	UFUNCTION(BlueprintPure)
	float GetLockerDetectionRadius() const;

public:
	UK28P02();
};

FORCEINLINE uint32 GetTypeHash(const UK28P02) { return 0; }
