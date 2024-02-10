#include "Tile2.h"

ATile2::ATile2()
{
	this->EnableRandomizer = false;
	this->RandomizerSeed = 0;
	this->Randomizers = TArray<FTileRandomizerData>();
}
