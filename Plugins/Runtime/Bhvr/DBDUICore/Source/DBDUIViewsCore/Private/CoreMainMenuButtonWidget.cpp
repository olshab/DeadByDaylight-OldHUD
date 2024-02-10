#include "CoreMainMenuButtonWidget.h"

class UCoreTimerFlagWidget;

UCoreTimerFlagWidget* UCoreMainMenuButtonWidget::CreateTimerFlag()
{
	return NULL;
}

void UCoreMainMenuButtonWidget::ClearAllTimerFlags()
{

}

UCoreMainMenuButtonWidget::UCoreMainMenuButtonWidget()
{
	this->ButtonTemplate = EMainMenuButtonTemplate::Default;
	this->GameType = EGameType::None;
	this->_timerFlagWidgetClass = NULL;
	this->TimerFlagContainer = NULL;
	this->BonusLabelTB = NULL;
	this->BonusValueTB = NULL;
	this->SubtitleTB = NULL;
	this->_buttonDisableState = EButtonDisableState::Default;
	this->_isNew = false;
	this->_hasNewStoreItem = false;
	this->_timerFlagWidgets = TArray<UCoreTimerFlagWidget*>();
}
