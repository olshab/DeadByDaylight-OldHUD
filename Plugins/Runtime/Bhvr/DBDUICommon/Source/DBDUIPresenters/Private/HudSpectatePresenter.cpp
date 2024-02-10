#include "HudSpectatePresenter.h"
#include "EGameState.h"

class ADBDPlayerState;

void UHudSpectatePresenter::OnPreviousPlayerTriggered()
{

}

void UHudSpectatePresenter::OnPlayerGameStateChanged(ADBDPlayerState* dbdPlayerState, EGameState newGameState)
{

}

void UHudSpectatePresenter::OnNextPlayerTriggered()
{

}

void UHudSpectatePresenter::OnLeaveTriggered()
{

}

UHudSpectatePresenter::UHudSpectatePresenter()
{
	this->CoreSpectateBarWidget = NULL;
}
