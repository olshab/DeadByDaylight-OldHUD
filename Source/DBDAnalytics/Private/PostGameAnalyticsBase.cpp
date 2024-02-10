#include "PostGameAnalyticsBase.h"

FPostGameAnalyticsBase::FPostGameAnalyticsBase()
{
	this->MatchId = TEXT("");
	this->KrakenMatchId = TEXT("");
	this->GameMode = TEXT("");
	this->BloodwebPoints = 0;
	this->BonusEvent = 0;
	this->MatchIncentive = 0;
	this->LteIncentive = 0;
	this->GameDuration = 0.0f;
	this->CharacterName = TEXT("");
	this->Rank = 0;
	this->PipsGainedOrLost = 0;
	this->MatchEndReason = TEXT("");
	this->IsTutorialBotMatch = false;
	this->OnboardingModeId = TEXT("");
	this->OnboardingEnabled = 0;
	this->OnboardingABTestingEnabled = 0;
	this->OnboardingNumberActiveModes = 0;
	this->OnboardingNewAssignedMode = 0;
	this->ExactPing = 0.0f;
}
