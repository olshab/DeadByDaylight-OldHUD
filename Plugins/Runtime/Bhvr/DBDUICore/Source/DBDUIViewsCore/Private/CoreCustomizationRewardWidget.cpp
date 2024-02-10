#include "CoreCustomizationRewardWidget.h"
#include "ECurrencyType.h"
#include "EItemRarity.h"
#include "CustomizationRewardViewData.h"

void UCoreCustomizationRewardWidget::SetVisibleCurrencies(TArray<ECurrencyType> visibleCurrencyTypes)
{

}

void UCoreCustomizationRewardWidget::SetRarity(EItemRarity rarity)
{

}

void UCoreCustomizationRewardWidget::SetCustomizationRewardData_Implementation(const FCustomizationRewardViewData& customizationRewardViewData)
{

}

void UCoreCustomizationRewardWidget::DisplayEventPointIcon(bool show)
{

}

UCoreCustomizationRewardWidget::UCoreCustomizationRewardWidget()
{
	this->PriceTagWidgetClass = NULL;
	this->RarityIMG = NULL;
	this->EventPointsImage = NULL;
	this->CheckmarkImage = NULL;
	this->PriceTagsVerticalBox = NULL;
}
