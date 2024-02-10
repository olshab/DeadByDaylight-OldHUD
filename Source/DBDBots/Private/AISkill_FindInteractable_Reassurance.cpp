#include "AISkill_FindInteractable_Reassurance.h"

UAISkill_FindInteractable_Reassurance::UAISkill_FindInteractable_Reassurance()
{
	this->ReassuranceStatusEffect = NULL;
	this->_hookedAndNotReassuredSurvivors = TArray<TWeakObjectPtr<ACamperPlayer>>();
}
