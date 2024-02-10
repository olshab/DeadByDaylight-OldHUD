#include "HudScreen.h"

void UHudScreen::OnTutorialHudFadeOutTriggered()
{

}

void UHudScreen::OnTutorialHudFadeInTriggered()
{

}

void UHudScreen::OnHUDWidgetFadeOutCompleted()
{

}

void UHudScreen::OnHUDWidgetDelayCompleted() const
{

}

void UHudScreen::OnHideStartSequenceCompleted()
{

}

void UHudScreen::OnHemorrhageAnimationComplete()
{

}

UHudScreen::UHudScreen()
{
	this->_rootWidget = NULL;
	this->_tutorialsUtilities = NULL;
	this->_playerStatusInterfaces = TArray<TScriptInterface<IPlayerStatusViewInterface>>();
	this->_playerStatusViewData = TArray<FPlayerStatusViewData>();
}
