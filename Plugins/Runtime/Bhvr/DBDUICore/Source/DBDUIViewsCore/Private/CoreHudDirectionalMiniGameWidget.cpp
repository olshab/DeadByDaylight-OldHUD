#include "CoreHudDirectionalMiniGameWidget.h"
#include "EDirectionalMiniGameType.h"

class UCoreHudDirectionalMiniGameItemWidget;

TArray<UCoreHudDirectionalMiniGameItemWidget*> UCoreHudDirectionalMiniGameWidget::GetWidgets()
{
	return TArray<UCoreHudDirectionalMiniGameItemWidget*>();
}

EDirectionalMiniGameType UCoreHudDirectionalMiniGameWidget::GetCurrentType() const
{
	return EDirectionalMiniGameType::None;
}

UCoreHudDirectionalMiniGameWidget::UCoreHudDirectionalMiniGameWidget()
{
	this->SkullMerchantItemWidgetClass = NULL;
	this->WormholeItemWidgetClass = NULL;
	this->Container = NULL;
	this->_widgets = TArray<UCoreHudDirectionalMiniGameItemWidget*>();
	this->_currentType = EDirectionalMiniGameType::None;
}
