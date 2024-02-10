#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_K33ControlStation.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_K33ControlStation : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter GeneratorMaxRange;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter TurretProximityPenaltyMaxRange;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter TurretsRemainingWeightBonus;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter TurretProximityWeightPenalty;

public:
	UAISkill_FindInteractable_K33ControlStation();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_K33ControlStation) { return 0; }
