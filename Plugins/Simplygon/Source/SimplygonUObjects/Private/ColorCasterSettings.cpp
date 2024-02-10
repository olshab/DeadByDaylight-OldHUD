#include "ColorCasterSettings.h"

FColorCasterSettings::FColorCasterSettings()
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
	this->OutputSRGB = false;
	this->BakeOpacityInAlpha = false;
	this->SkipCastingIfNoInputChannel = false;
	this->OutputOpacityType = EOutputOpacityType::Opacity;
}
