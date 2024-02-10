#include "EventEntryRewardsDisplayWidget.h"
#include "EventEntryPopupSkinUIData.h"
#include "CustomizationItemPreviewAreaViewData.h"
#include "CustomizationItemOriginViewData.h"

class UStoreCustomizationItemViewData;
class UCoreKeyListenerInputPromptWidget;

void UEventEntryRewardsDisplayWidget::SetVisuals_Implementation(FEventEntryPopupSkinUIData skinUIData)
{

}

void UEventEntryRewardsDisplayWidget::SetSelectedReward(const int32 selectedIndex)
{

}

void UEventEntryRewardsDisplayWidget::SetScrollPrompt(UCoreKeyListenerInputPromptWidget* displayPrompt)
{

}

void UEventEntryRewardsDisplayWidget::SetPreviewAreaData(const FCustomizationItemPreviewAreaViewData& viewData)
{

}

void UEventEntryRewardsDisplayWidget::SetItemsData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex)
{

}

void UEventEntryRewardsDisplayWidget::SetInstructionWidgetData(const FCustomizationItemOriginViewData& viewData)
{

}

void UEventEntryRewardsDisplayWidget::DisableInstructionStoreButton()
{

}

void UEventEntryRewardsDisplayWidget::DisableInstructionCurrencyButton()
{

}

void UEventEntryRewardsDisplayWidget::DisableInstructionArchivesButton()
{

}

void UEventEntryRewardsDisplayWidget::DisableInputs()
{

}

UEventEntryRewardsDisplayWidget::UEventEntryRewardsDisplayWidget()
{
	this->_layoutMask = 0;
	this->RewardGrid = NULL;
	this->PreviewArea = NULL;
	this->InstructionWidget = NULL;
}
