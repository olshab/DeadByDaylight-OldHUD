#include "ProfileMenuPresenter.h"
#include "EProfileMenuState.h"

void UProfileMenuPresenter::SetMenuState(EProfileMenuState menuState)
{

}

void UProfileMenuPresenter::OnSettingsButtonClicked()
{

}

void UProfileMenuPresenter::OnBackButtonClicked()
{

}

UProfileMenuPresenter::UProfileMenuPresenter()
{
	this->ProfileMenuWidgetClass = NULL;
	this->_statsSubPresenter = NULL;
	this->_badgeSubPresenter = NULL;
	this->_bannerSubPresenter = NULL;
	this->_activeSubPresenter = NULL;
}
