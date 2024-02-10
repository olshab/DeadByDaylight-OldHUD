#include "NewKillerTutorialAnalytics.h"

FNewKillerTutorialAnalytics::FNewKillerTutorialAnalytics()
{
	this->IsKickGeneratorComplete = false;
	this->IsFollowSurvivorComplete = false;
	this->TimeToCompleteAreaOne = 0;
	this->IsDestroyPalletComplete = false;
	this->TimeToCompleteAreaTwo = 0;
	this->IsBeartrapComplete = false;
	this->IsHitSurvivorComplete = false;
	this->IsKoSurvivorComplete = false;
	this->IsPickupSurvivorComplete = false;
	this->IsHookSurvivorComplete = false;
	this->IsCloseHatchComplete = false;
	this->IsKillSurvivorComplete = false;
	this->TimeToCompleteAreaThree = 0;
	this->TotalTimeInTutorial = 0;
	this->TutorialId = TEXT("");
	this->OnboardingModeId = TEXT("");
	this->OnboardingEnabled = 0;
	this->OnboardingABTestingEnabled = 0;
	this->OnboardingNumberActiveModes = 0;
	this->OnboardingNewAssignedMode = 0;
}
