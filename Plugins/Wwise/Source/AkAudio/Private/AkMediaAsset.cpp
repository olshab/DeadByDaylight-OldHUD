#include "AkMediaAsset.h"

UAkMediaAsset::UAkMediaAsset()
{
	this->Id = 0;
	this->MediaName = TEXT("");
	this->AutoLoad = true;
	this->UserData = TArray<UObject*>();
	this->Language = TEXT("SFX");
	this->CurrentMediaAssetData = NULL;
}
