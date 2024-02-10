#include "CoreTabContainerWidget.h"
#include "TabWidgetData.h"

class UMaterialInterface;
class UCoreSelectableButtonWidget;
class UCoreTabWidget;

void UCoreTabContainerWidget::UpdateBackgroundSkin(int32 key, UMaterialInterface* skinMaterial)
{

}

void UCoreTabContainerWidget::SetUseControllerTabSwitching(bool enabled)
{

}

void UCoreTabContainerWidget::SetUiTakeoverActive_Implementation(bool isActive)
{

}

void UCoreTabContainerWidget::SetTabVisible(int32 key, bool visible)
{

}

void UCoreTabContainerWidget::SetTabEnabled(int32 key, bool enabled)
{

}

void UCoreTabContainerWidget::SetNotificationVisibility(int32 key, bool hasNotification)
{

}

void UCoreTabContainerWidget::RemoveTabs()
{

}

void UCoreTabContainerWidget::OnTabSelected(UCoreSelectableButtonWidget* selectedButton)
{

}

void UCoreTabContainerWidget::LayOutTabs()
{

}

void UCoreTabContainerWidget::Init(const TArray<FTabWidgetData>& tabsData)
{

}

int32 UCoreTabContainerWidget::GetTabIndex(int32 key) const
{
	return 0;
}

UCoreTabWidget* UCoreTabContainerWidget::GetTab(int32 key) const
{
	return NULL;
}

UCoreTabContainerWidget::UCoreTabContainerWidget()
{
	this->InputPromptTriggeredSfx = NULL;
	this->AlignHorizontally = true;
	this->CoreTabClass = NULL;
	this->TabContainer = NULL;
	this->UseControllerTabSwitching = true;
	this->CanLoop = false;
	this->FillContainerSpace = false;
	this->SendAnalyticsData = false;
}
