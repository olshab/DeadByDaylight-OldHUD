#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "Templates/SubclassOf.h"
#include "AITunableParameter.h"
#include "AISkill_FindInteractable_Reassurance.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_Reassurance : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> ReassuranceStatusEffect;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter AllyDangerStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MaxHookTimeGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter HumanAllyHookedGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter IdealKillerDistanceFromHook;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter MaxKillerProximityWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BotDangerStateGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter IncapacitatedAlliesGoalWeight;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter BotInjuredStateGoalWeight;

private:
	UPROPERTY()
	TArray<TWeakObjectPtr<ACamperPlayer>> _hookedAndNotReassuredSurvivors;

public:
	UAISkill_FindInteractable_Reassurance();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Reassurance) { return 0; }
