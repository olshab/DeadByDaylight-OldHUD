#include "AISkill_LeaveGeneratorInteraction.h"

UAISkill_LeaveGeneratorInteraction::UAISkill_LeaveGeneratorInteraction()
{
	this->Perks = TArray<FPerkIdDropdown>();
	this->BBIsDoingLeaveGeneratorInteraction = TEXT("IsDoingLeaveGeneratorInteraction");
}
