#include "SpecialEventDetailsTabData.h"

FSpecialEventDetailsTabData::FSpecialEventDetailsTabData()
{
	this->Layout = EDetailsTabLayout::SingleColumn;
	this->Content = TArray<FSpecialEventDetailsTabContentData>();
	this->Image = NULL;
}
