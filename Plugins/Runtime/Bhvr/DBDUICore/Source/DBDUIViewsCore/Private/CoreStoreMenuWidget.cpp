#include "CoreStoreMenuWidget.h"

class UCoreSelectableButtonWidget;
class UCoreButtonWidget;

void UCoreStoreMenuWidget::OnRedeemCodeButtonClicked(UCoreButtonWidget* selectedButton)
{

}

void UCoreStoreMenuWidget::OnMenuTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreStoreMenuWidget::OnGetAuricCellsClicked(UCoreButtonWidget* buttonTarget)
{

}

void UCoreStoreMenuWidget::OnBackAction()
{

}

UCoreStoreMenuWidget::UCoreStoreMenuWidget()
{
	this->StoreMenuTabs = NULL;
	this->RedeemCodeButton = NULL;
	this->GetAuricCellsButton = NULL;
	this->BackInputSwitcher = NULL;
}
