#include "CoreShrineOfSecretsItemWidget.h"
#include "ShrineOfSecretsItemViewData.h"

class UCoreButtonWidget;

void UCoreShrineOfSecretsItemWidget::ShowPerkTooltip(UCoreButtonWidget* hoveredSlotWidget)
{

}

void UCoreShrineOfSecretsItemWidget::SetVisuals_Implementation(const FShrineOfSecretsItemViewData& shrineOfSecretsItemViewData)
{

}

void UCoreShrineOfSecretsItemWidget::PlayUnlockAnimation_Implementation()
{

}

void UCoreShrineOfSecretsItemWidget::OnPurchaseButtonClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreShrineOfSecretsItemWidget::HidePerkTooltip(UCoreButtonWidget* unhoveredSlotWidget)
{

}

UCoreShrineOfSecretsItemWidget::UCoreShrineOfSecretsItemWidget()
{
	this->Perk = NULL;
	this->CheckmarkIMG = NULL;
	this->PerkNameTB = NULL;
	this->CharacterNameTB = NULL;
	this->BPConversionRTB = NULL;
	this->DescriptionRTB = NULL;
	this->CurrencyButton = NULL;
	this->PerkMaxedTB = NULL;
}
