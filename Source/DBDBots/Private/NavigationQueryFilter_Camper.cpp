#include "NavigationQueryFilter_Camper.h"

UNavigationQueryFilter_Camper::UNavigationQueryFilter_Camper()
{
	this->SlasherAreaBoundsLimit = 3200.000000;
	this->SlasherAreaPenetrationCost = 10000.000000;
	this->SlasherInSightCost = 0.000000;
	this->SlasherAreaExcludeUnderRange = 500.000000;
	this->SlasherAreaUnwalkableRange = 70.000000;
	this->SlasherInExcludeAreaCost = 1000000.000000;
}
