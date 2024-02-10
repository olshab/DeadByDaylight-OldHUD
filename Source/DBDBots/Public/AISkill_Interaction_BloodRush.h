#pragma once

#include "CoreMinimal.h"
#include "AISkill_Interaction.h"
#include "AIHasExhaustionPerkCondition.h"
#include "KillerFilterItem.h"
#include "AITunableParameter.h"
#include "AISkill_Interaction_BloodRush.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_Interaction_BloodRush : public UAISkill_Interaction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TArray<FAIHasExhaustionPerkCondition> ExhaustionPerks;

	UPROPERTY(EditDefaultsOnly)
	TArray<FKillerFilterItem> RiskyKillerFilter;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AfterExhaustionMinimumDelaySeconds;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MinimumRemainingExhaustionCooldownSeconds;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MinimumDistanceFromKiller;

public:
	UAISkill_Interaction_BloodRush();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_Interaction_BloodRush) { return 0; }
