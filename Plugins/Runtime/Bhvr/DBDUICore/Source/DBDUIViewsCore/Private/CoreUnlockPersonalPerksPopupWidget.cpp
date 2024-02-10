#include "CoreUnlockPersonalPerksPopupWidget.h"

class UCoreButtonWidget;

void UCoreUnlockPersonalPerksPopupWidget::ShowMenuPerkTooltip(UCoreButtonWidget* hoveredSlotWidget)
{

}

void UCoreUnlockPersonalPerksPopupWidget::HideMenuPerkTooltip(UCoreButtonWidget* unhoveredSlotWidget)
{

}

UCoreUnlockPersonalPerksPopupWidget::UCoreUnlockPersonalPerksPopupWidget()
{
	this->_perkArray = TArray<UCoreMenuPerkWidget*>();
	this->FirstPerk = NULL;
	this->SecondPerk = NULL;
	this->ThirdPerk = NULL;
}
