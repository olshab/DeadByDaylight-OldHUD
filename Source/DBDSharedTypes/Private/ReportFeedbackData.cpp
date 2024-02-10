#include "ReportFeedbackData.h"

FReportFeedbackData::FReportFeedbackData()
{
	this->BanTimestamp = FDateTime{};
	this->Reason = FText::GetEmpty();
	this->MessageIds = TArray<int64>();
	this->RecipientId = TEXT("");
}
