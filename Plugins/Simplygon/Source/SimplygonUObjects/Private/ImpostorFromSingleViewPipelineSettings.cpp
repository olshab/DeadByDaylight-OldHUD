#include "ImpostorFromSingleViewPipelineSettings.h"

FImpostorFromSingleViewPipelineSettings::FImpostorFromSingleViewPipelineSettings()
{
	this->ImpostorFromSingleViewSettings = FImpostorFromSingleViewSettings{};
	this->AttributeTessellationSettings = FAttributeTessellationSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
