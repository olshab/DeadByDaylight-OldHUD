#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "ResetBearTrapInteraction.generated.h"

class UAnimSequence;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UResetBearTrapInteraction : public UChargeableInteractionDefinition
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
	UResetBearTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UResetBearTrapInteraction) { return 0; }
