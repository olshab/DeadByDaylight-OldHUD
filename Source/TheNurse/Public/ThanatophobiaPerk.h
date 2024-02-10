#pragma once

#include "CoreMinimal.h"
#include "BaseNursePerk.h"
#include "ThanatophobiaPerk.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UThanatophobiaPerk : public UBaseNursePerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _actionSpeedModifier;

	UPROPERTY(EditDefaultsOnly)
	float _additionalActionSpeedModifier;

	UPROPERTY(EditDefaultsOnly)
	int32 _numSurvivorsForAdditionalSpeedModifier;

public:
	UFUNCTION(BlueprintPure)
	int32 GetNumSurvivorsForAdditionalSpeedModifier() const;

	UFUNCTION(BlueprintPure)
	float GetAdditionalActionSpeedModifierAtLevel() const;

	UFUNCTION(BlueprintPure)
	float GetActionSpeedModifierAtLevel() const;

public:
	UThanatophobiaPerk();
};

FORCEINLINE uint32 GetTypeHash(const UThanatophobiaPerk) { return 0; }
