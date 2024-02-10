#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexThrillOfTheHunt.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexThrillOfTheHunt : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _thrillOfTheHuntStatusEffect;

	UPROPERTY(EditDefaultsOnly)
	float _hunterPointsBonusPercent;

private:
	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _survivorThrillOfTheHuntEffects;

public:
	UHexThrillOfTheHunt();
};

FORCEINLINE uint32 GetTypeHash(const UHexThrillOfTheHunt) { return 0; }
