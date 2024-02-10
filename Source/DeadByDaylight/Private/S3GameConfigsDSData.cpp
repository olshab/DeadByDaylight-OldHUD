#include "S3GameConfigsDSData.h"

FS3GameConfigsDSData::FS3GameConfigsDSData()
{
	this->Ddos = FDDosGameConfigDS{};
	this->MapHistoryWeights = TMap<int32, float>();
}
