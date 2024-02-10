#include "AISkill_Interaction_SetGeneratorTrap.h"

UAISkill_Interaction_SetGeneratorTrap::UAISkill_Interaction_SetGeneratorTrap()
{
	this->MinGeneratorRepairPercentToSetTrap = 0.500000;
	this->TerrorLevelToSetTrap = EAITerrorLevel::None;
	this->TerrorLevelToSetTrapImmediately = EAITerrorLevel::None;
	this->TerrorLevelCloseRange = 50.000000;
}
