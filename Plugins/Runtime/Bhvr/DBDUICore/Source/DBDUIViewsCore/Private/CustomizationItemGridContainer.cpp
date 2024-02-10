#include "CustomizationItemGridContainer.h"

class UStoreCustomizationItemViewData;
class UCoreKeyListenerInputPromptWidget;
class UCoreSelectableButtonWidget;

void UCustomizationItemGridContainer::SetSelectedItem(const int32 selectedIndex)
{

}

void UCustomizationItemGridContainer::SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt)
{

}

void UCustomizationItemGridContainer::SetItemsLayout(int32 layoutMask)
{

}

void UCustomizationItemGridContainer::SetData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex)
{

}

void UCustomizationItemGridContainer::OnItemClicked(UCoreSelectableButtonWidget* buttonTarget, bool isSelected)
{

}

void UCustomizationItemGridContainer::ClearGrid()
{

}

UCustomizationItemGridContainer::UCustomizationItemGridContainer()
{
	this->_customizationRewardWidgetClass = NULL;
	this->_emptyRewardWidgetClass = NULL;
	this->_setSmallTemplate = false;
	this->_columnCountInGrid = 5;
	this->_customizationTileScale = 1.000000;
	this->_layoutMask = 0;
	this->_flagSize = EFlagSize::Short;
	this->_rowCountToShowScrollBar = 3;
	this->_fillGridWithEmptyItems = false;
	this->GridContainer = NULL;
	this->ScrollBox = NULL;
	this->_scrollLabelText = FText::GetEmpty();
	this->_customizationRewards = TArray<UCoreStoreCustomizationItemWidget*>();
}
