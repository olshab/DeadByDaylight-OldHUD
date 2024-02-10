#include "FeatureLocksContentData.h"

FFeatureLocksContentData::FFeatureLocksContentData()
{
	this->Id = TEXT("");
	this->Role = TEXT("");
	this->Role_IsSet = false;
	this->Condition = TArray<FFeatureLocksConditionData>();
}
