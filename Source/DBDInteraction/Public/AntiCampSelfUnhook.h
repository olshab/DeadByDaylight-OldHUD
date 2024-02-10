#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "AnimationMontageDescriptor.h"
#include "DBDTunableRowHandle.h"
#include "AntiCampSelfUnhook.generated.h"

class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UAntiCampSelfUnhook : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _selfUnhookMontage;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _enduranceEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _movementSpeedBonusDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _enduranceEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _movementSpeedBonusEffectClass;

public:
	UFUNCTION(BlueprintPure)
	float GetAntiCampTrapImmunityDuration() const;

public:
	UAntiCampSelfUnhook();
};

FORCEINLINE uint32 GetTypeHash(const UAntiCampSelfUnhook) { return 0; }
