#include "AISkill_Interaction_BloodRush.h"

UAISkill_Interaction_BloodRush::UAISkill_Interaction_BloodRush()
{
	this->ExhaustionPerks = TArray<FAIHasExhaustionPerkCondition>();
	this->RiskyKillerFilter = TArray<FKillerFilterItem>();
}
