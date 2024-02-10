#include "AISkill_Strafe.h"

UAISkill_Strafe::UAISkill_Strafe()
{
	this->StartMaxRange = 200.000000;
	this->StopMaxRange = 300.000000;
	this->StartMaxRangeAgainstRangedHostileStimulus = 700.000000;
	this->StopMaxRangeAgainstRangedHostileStimulus = 800.000000;
	this->StrafeBackwardRange = 0.000000;
	this->StrafeFowardRange = 450.000000;
	this->DodgeDirectionSweepTestStartMultiplier = 1.300000;
	this->DodgeDirectionSweepTestEndMultiplier = 2.000000;
	this->IgnoreUnderNavLinkStartRange = 300.000000;
	this->PauseStrafeOnAnimation = true;
}
