#include "DBDInputManager.h"

class UUserWidget;

void UDBDInputManager::RemovePresenterRootWidget(const UUserWidget* presenterRootWidget)
{

}

void UDBDInputManager::AddPresenterRootWidget(UUserWidget* presenterRootWidget)
{

}

UDBDInputManager::UDBDInputManager()
{
	this->_controlModeManager = NULL;
	this->_switchDockStateManager = NULL;
	this->_virtualKeyboardManager = NULL;
	this->_analogCursorDb = NULL;
}
