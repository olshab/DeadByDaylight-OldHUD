#include "MapSelectionAnalytics.h"

FMapSelectionAnalytics::FMapSelectionAnalytics()
{
	this->KrakenMatchId = TEXT("");
	this->SelectedMapId = TEXT("");
	this->MapSeed = 0;
	this->SelectedMapOdds = 0.0f;
	this->TotalMapWeight = 0.0f;
	this->MapWeights = TArray<FMapSelectionWeight>();
}
