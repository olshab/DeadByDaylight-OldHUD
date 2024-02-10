#include "AnimBudgeterGameConfig.h"

FAnimBudgeterGameConfig::FAnimBudgeterGameConfig()
{
	this->Enabled = false;
	this->Ps4Budget = 0.0f;
	this->Ps5Budget = 0.0f;
	this->XboxOneBudget = 0.0f;
	this->XsxBudget = 0.0f;
	this->SwitchBudget = 0.0f;
	this->SteamBudgets = TArray<float>();
}
