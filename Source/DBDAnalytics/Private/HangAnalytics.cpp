#include "HangAnalytics.h"

FHangAnalytics::FHangAnalytics()
{
	this->IsHang = false;
	this->HangSourcesInfo = TEXT("");
	this->HangLogs = TEXT("");
	this->LastLoadingProgression = 0.0f;
	this->AdditionalLogs = TEXT("");
	this->MatchId = TEXT("");
	this->HangSourcesName = TEXT("");
}
