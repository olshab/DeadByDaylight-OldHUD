#include "BaseCheatAnalytics.h"

FBaseCheatAnalytics::FBaseCheatAnalytics()
{
	this->Location = TEXT("");
	this->NetMode = TEXT("");
	this->Requester = TEXT("");
	this->RequesterPlatform = TEXT("");
	this->RequesterRole = TEXT("");
	this->RequesterCharacterId = 0;
	this->RequesterCharacterName = TEXT("");
	this->MatchId = TEXT("");
	this->MatchType = TEXT("");
}
