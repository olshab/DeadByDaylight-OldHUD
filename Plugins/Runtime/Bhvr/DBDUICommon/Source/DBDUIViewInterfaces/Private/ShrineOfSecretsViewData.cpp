#include "ShrineOfSecretsViewData.h"

FShrineOfSecretsViewData::FShrineOfSecretsViewData()
{
	this->OfferDate = FDateTime{};
	this->EndDate = FDateTime{};
	this->ItemsViewData = TArray<FShrineOfSecretsItemViewData>();
}
