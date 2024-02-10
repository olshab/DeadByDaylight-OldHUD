#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "DyingLight.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UDyingLight : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	TArray<float> _actionSpeedPenaltyPerToken;

	UPROPERTY(EditAnywhere)
	float _obsessionActionSpeedBonus;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _obsessionStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _nonObsessionStatusEffect;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _survivorDebuffs;

private:
	UFUNCTION()
	void OnObsessionChanged(ACamperPlayer* newObsession, ACamperPlayer* previousObsession);

public:
	UFUNCTION(BlueprintPure)
	float GetObsessionActionSpeedBonus() const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedPenaltyPerTokenAtLevel() const;

public:
	UDyingLight();
};

FORCEINLINE uint32 GetTypeHash(const UDyingLight) { return 0; }
