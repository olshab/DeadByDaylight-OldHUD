#include "MappingImageSettings.h"

FMappingImageSettings::FMappingImageSettings()
{
	this->GenerateMappingImage = false;
	this->GenerateTexCoords = false;
	this->GenerateTangents = false;
	this->ReplaceMappingImages = false;
	this->UseFullRetexturing = false;
	this->ApplyNewMaterialIds = false;
	this->UseAutomaticTextureSize = false;
	this->AutomaticTextureSizeMultiplier = 0.0f;
	this->ForcePower2Texture = false;
	this->OnlyParameterizeInvalidUVs = false;
	this->AllowTransparencyMapping = false;
	this->MaximumLayers = 0;
	this->TexCoordLevel = 0;
	this->TexCoordName = TEXT("");
	this->TexCoordGeneratorType = ETexCoordGeneratorType::Parameterizer;
	this->OutputMaterialCount = 0;
	this->InputMaterialCount = 0;
	this->ChartAggregatorSettings = FChartAggregatorSettings{};
	this->ParameterizerSettings = FParameterizerSettings{};
	this->InputMaterialSettings = TArray<FInputMaterialSettings>();
	this->OutputMaterialSettings = TArray<FOutputMaterialSettings>();
}
