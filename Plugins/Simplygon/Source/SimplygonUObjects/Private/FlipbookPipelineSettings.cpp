#include "FlipbookPipelineSettings.h"

FFlipbookPipelineSettings::FFlipbookPipelineSettings()
{
	this->FlipbookSettings = FFlipbookSettings{};
	this->AttributeTessellationSettings = FAttributeTessellationSettings{};
	this->MappingImageSettings = FMappingImageSettings{};
	this->MaterialPropertyCasters = TArray<USimplygonMaterialCaster*>();
}
