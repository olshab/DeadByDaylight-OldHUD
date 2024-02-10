#include "CustomizationItemOriginWidget.h"
#include "CustomizationItemOriginViewData.h"
#include "PriceTagViewData.h"

class UCoreInputSwitcherWidget;

void UCustomizationItemOriginWidget::SetStoreState_Implementation()
{

}

void UCustomizationItemOriginWidget::SetState(const FCustomizationItemOriginViewData& viewData)
{

}

void UCustomizationItemOriginWidget::SetMilestonePointsState_Implementation(const TArray<FText>& args)
{

}

void UCustomizationItemOriginWidget::SetInputSwitcherEnabled(UCoreInputSwitcherWidget* inputSwitcher, const bool enabled)
{

}

void UCustomizationItemOriginWidget::SetGameplayState_Implementation(const TArray<FText>& args)
{

}

void UCustomizationItemOriginWidget::SetDefaultState_Implementation()
{

}

void UCustomizationItemOriginWidget::SetData(const FCustomizationItemOriginViewData& viewData)
{

}

void UCustomizationItemOriginWidget::SetCurrencyPurchaseState_Implementation(const FPriceTagViewData& currencyData)
{

}

void UCustomizationItemOriginWidget::SetArchivesState_Implementation(const TArray<FText>& args)
{

}

void UCustomizationItemOriginWidget::OnButtonClick()
{

}

void UCustomizationItemOriginWidget::DisableStoreButton()
{

}

void UCustomizationItemOriginWidget::DisableInputs()
{

}

void UCustomizationItemOriginWidget::DisableCurrencyButton()
{

}

void UCustomizationItemOriginWidget::DisableArchivesButton()
{

}

UCustomizationItemOriginWidget::UCustomizationItemOriginWidget()
{
	this->InstructionText = NULL;
	this->InstructionImage = NULL;
	this->UnlockTitle = NULL;
	this->UnlockSubtitle = NULL;
	this->CurrencyButton = NULL;
	this->ArchivesButton = NULL;
	this->StoreButton = NULL;
}
