#include "CoreRankWidgetConfiguration.h"

FCoreRankWidgetConfiguration::FCoreRankWidgetConfiguration()
{
	this->SurvivorRanks = TMap<int32, FCoreRanksConfiguration>();
	this->KillerRanks = TMap<int32, FCoreRanksConfiguration>();
	this->RankNumberImages = TMap<int32, UTexture2D*>();
}
