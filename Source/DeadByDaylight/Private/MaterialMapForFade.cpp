#include "MaterialMapForFade.h"

FMaterialMapForFade::FMaterialMapForFade()
{
	this->OriginalMaterialPath = TEXT("");
	this->GeneratedMaterial = NULL;
	this->StaticSwitches = TMap<FGuid, bool>();
	this->StaticSwitchesName = TMap<FGuid, FName>();
}
