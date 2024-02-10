#include "AutomaticBreadcrumbs.h"

FAutomaticBreadcrumbs::FAutomaticBreadcrumbs()
{
	this->bOnMapLoadingStarted = false;
	this->bOnMapLoaded = false;
	this->bOnGameStateClassChanged = false;
	this->bOnGameSessionIDChanged = false;
	this->bOnUserActivityStringChanged = false;
}
