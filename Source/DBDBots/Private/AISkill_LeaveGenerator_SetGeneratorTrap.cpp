#include "AISkill_LeaveGenerator_SetGeneratorTrap.h"

UAISkill_LeaveGenerator_SetGeneratorTrap::UAISkill_LeaveGenerator_SetGeneratorTrap()
{
	this->MinGeneratorRepairPercentToSetTrap = 0.500000;
	this->TerrorLevelToSetTrap = EAITerrorLevel::None;
	this->TerrorLevelToSetTrapImmediately = EAITerrorLevel::None;
	this->TerrorLevelCloseRange = 150.000000;
}
