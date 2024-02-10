#include "CoreStoreBaseSubTabsWidget.h"

class UCoreSelectableButtonWidget;
class UWidget;

void UCoreStoreBaseSubTabsWidget::OnSubTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

UWidget* UCoreStoreBaseSubTabsWidget::GetSubTabContentForTab_Implementation(int32 subTabId)
{
	return NULL;
}

UCoreStoreBaseSubTabsWidget::UCoreStoreBaseSubTabsWidget()
{
	this->SubTabsContainer = NULL;
	this->TabContentSwitcher = NULL;
}
