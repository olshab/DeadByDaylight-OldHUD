#include "NormalCasterSettings.h"

FNormalCasterSettings::FNormalCasterSettings()
{
	this->MaterialChannel = TEXT("");
	this->OpacityChannel = TEXT("");
	this->OpacityChannelComponent = EOpacityChannelComponent::Red;
	this->DitherType = EDitherType::NoDither;
	this->FillMode = EFillMode::Interpolate;
	this->Dilation = 0;
	this->UseMultisampling = false;
	this->OutputPixelFormat = EOutputPixelFormat::R8G8B8A8;
	this->OutputImageFileFormat = EOutputImageFileFormat::BMP;
	this->OutputDDSCompressionType = EOutputDDSCompressionType::NoCompression;
	this->FlipBackfacingNormals = false;
	this->FlipBackfacingMode = EFlipBackfacingMode::PixelNormal;
	this->GenerateTangentSpaceNormals = false;
	this->FlipGreen = false;
	this->CalculateBitangentPerFragment = false;
	this->NormalizeInterpolatedTangentSpace = false;
}
