#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K33P02.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33P02 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _hasteDuration;

	UPROPERTY(EditDefaultsOnly)
	float _hasteAmount;

	UPROPERTY(Transient, Export)
	UStatusEffect* _hasteEffect;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteDurationAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetHasteAmount() const;

public:
	UK33P02();
};

FORCEINLINE uint32 GetTypeHash(const UK33P02) { return 0; }
