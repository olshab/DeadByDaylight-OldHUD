#include "MainMenuButtonViewData.h"

FMainMenuButtonViewData::FMainMenuButtonViewData()
{
	this->ButtonType = EMainMenuButtonType::News;
	this->Bonus = TEXT("");
	this->Timer = FTimerFlagViewData{};
	this->IsNew = false;
	this->IsLoadingSaveActivityInProgress = false;
	this->IsLoadingPlayerFacade = false;
	this->IsLoadingChunking = false;
	this->IsLockedFeature = false;
	this->IsDisabled = false;
}
