#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "StakeOutPerk.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UStakeOutPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _stakeOutStatusEffectClass;

	UPROPERTY(Transient, Export)
	UStatusEffect* _stakeOutStatusEffect;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	int32 _maxTokensByLevel;

	UPROPERTY(EditDefaultsOnly)
	float _tokenChargeTime;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_ConsumeToken();

public:
	UFUNCTION(BlueprintCallable)
	void Local_BroadcastConsumeToken();

	UFUNCTION(BlueprintPure)
	float GetTokenChargeTime() const;

	UFUNCTION(BlueprintPure)
	float GetMaxTokensAtLevel() const;

public:
	UStakeOutPerk();
};

FORCEINLINE uint32 GetTypeHash(const UStakeOutPerk) { return 0; }
