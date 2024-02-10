#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "HexThirdSeal.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexThirdSeal : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _thirdSealBlindnessEffect;

	UPROPERTY(EditDefaultsOnly)
	int32 _maximumBlindableSurvivors;

public:
	UHexThirdSeal();
};

FORCEINLINE uint32 GetTypeHash(const UHexThirdSeal) { return 0; }
