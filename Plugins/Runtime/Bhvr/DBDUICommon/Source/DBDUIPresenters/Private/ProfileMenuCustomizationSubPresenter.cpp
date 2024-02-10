#include "ProfileMenuCustomizationSubPresenter.h"
#include "ESortingOption.h"
#include "ESortingOrder.h"

void UProfileMenuCustomizationSubPresenter::OnSearchBarTextChanged(const FString& enteredText)
{

}

void UProfileMenuCustomizationSubPresenter::OnRewardGridItemClicked(const int32 selectedIndex)
{

}

void UProfileMenuCustomizationSubPresenter::OnEquipButtonClicked()
{

}

void UProfileMenuCustomizationSubPresenter::OnCustomizationSortingChanged(const ESortingOption itemSorting, const ESortingOrder sortingOrder)
{

}

UProfileMenuCustomizationSubPresenter::UProfileMenuCustomizationSubPresenter()
{
	this->_profileMenuCustomizationWidget = NULL;
	this->_itemsData = TArray<UStoreCustomizationItemViewData*>();
	this->_displayedItemsData = TArray<UStoreCustomizationItemViewData*>();
}
