#include "ProfileMenuCustomizationWidget.h"

void UProfileMenuCustomizationWidget::OnEquipButtonClicked()
{

}

void UProfileMenuCustomizationWidget::OnCustomizationGridItemClicked(const int32 selectedIndex)
{

}

UProfileMenuCustomizationWidget::UProfileMenuCustomizationWidget()
{
	this->SortButton = NULL;
	this->_sortingOptions = 0;
	this->CustomizationGrid = NULL;
	this->PreviewArea = NULL;
	this->EquipInputSwitcher = NULL;
	this->_noBannerSelectedText = FText::GetEmpty();
	this->_noBadgeSelectedText = FText::GetEmpty();
	this->_customizationCategory = ECustomizationCategory::None;
	this->_searchBar = NULL;
	this->SearchBar = NULL;
}
