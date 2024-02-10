#include "DetailsTabViewData.h"

FDetailsTabViewData::FDetailsTabViewData()
{
	this->Layout = EDetailsTabLayout::SingleColumn;
	this->ContentData = TArray<FSpecialEventDetailsTabContentData>();
	this->Image = NULL;
}
