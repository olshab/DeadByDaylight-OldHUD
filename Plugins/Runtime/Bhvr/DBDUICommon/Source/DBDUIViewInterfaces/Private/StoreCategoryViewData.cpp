#include "StoreCategoryViewData.h"

FStoreCategoryViewData::FStoreCategoryViewData()
{
	this->Category = ECustomizationCategory::None;
	this->Icon = NULL;
	this->DisplayName = FText::GetEmpty();
}
