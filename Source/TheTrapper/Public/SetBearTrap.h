#pragma once

#include "CoreMinimal.h"
#include "SetTrapInteraction.h"
#include "Templates/SubclassOf.h"
#include "SetBearTrap.generated.h"

class UAnimSequence;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USetBearTrap : public USetTrapInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FName _enterMontageIDForBeartrap;

	UPROPERTY(EditDefaultsOnly)
	FName _udpateMontageIDForBeartrap;

	UPROPERTY(EditDefaultsOnly)
	UAnimSequence* _updateSequenceForBeartrap;

	UPROPERTY(EditDefaultsOnly)
	FName _exitMontageForIDBeartrap;

	UPROPERTY(EditDefaultsOnly)
	FName _cancelExitMontage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _hasteStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectMovementSpeedIncrease;

	UPROPERTY(EditDefaultsOnly)
	float _hasteEffectDurationSeconds;

public:
	UFUNCTION(BlueprintPure)
	float GetHasteEffectMovementSpeedIncrease() const;

	UFUNCTION(BlueprintPure)
	float GetHasteEffectDurationSeconds() const;

public:
	USetBearTrap();
};

FORCEINLINE uint32 GetTypeHash(const USetBearTrap) { return 0; }
