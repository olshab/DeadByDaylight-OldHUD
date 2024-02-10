#include "BillboardCloudVegetationPipelineSettings.h"

FBillboardCloudVegetationPipelineSettings::FBillboardCloudVegetationPipelineSettings()
{
	this->BillboardCloudSettings = FBillboardCloudSettings{};
	this->AttributeTessellationSettings = FAttributeTessellationSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
