#include "BillboardCloudPipelineSettings.h"

FBillboardCloudPipelineSettings::FBillboardCloudPipelineSettings()
{
	this->BillboardCloudSettings = FBillboardCloudSettings{};
	this->AttributeTessellationSettings = FAttributeTessellationSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
