#include "PharmacyPerk.h"

float UPharmacyPerk::GetSearchSpeedAtLevel() const
{
	return 0.0f;
}

UPharmacyPerk::UPharmacyPerk()
{
	this->_pharmacyEffectClass = NULL;
	this->_searchSpeeds = 0.000000;
}
