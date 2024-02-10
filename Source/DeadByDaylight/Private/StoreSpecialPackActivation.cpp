#include "StoreSpecialPackActivation.h"

FStoreSpecialPackActivation::FStoreSpecialPackActivation()
{
	this->Type = EStoreSpecialPackActivationType::Permanent;
	this->Id = TEXT("");
	this->StartDate = FDateTime{};
	this->EndDate = FDateTime{};
}
