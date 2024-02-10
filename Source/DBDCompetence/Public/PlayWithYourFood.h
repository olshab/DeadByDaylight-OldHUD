#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "GameplayTagContainer.h"
#include "PlayWithYourFood.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UPlayWithYourFood : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedPercentBuff;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _basicAndSpecialAttackTags;

	UPROPERTY(EditDefaultsOnly)
	float _chargeGainedCooldown;

public:
	UFUNCTION(BlueprintPure)
	float GetMovementSpeedPercentBuffAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetChargeGainedCooldown() const;

private:
	UFUNCTION()
	void Authority_OnChaseEnded(ADBDPlayer* player, float chaseTime);

public:
	UPlayWithYourFood();
};

FORCEINLINE uint32 GetTypeHash(const UPlayWithYourFood) { return 0; }
