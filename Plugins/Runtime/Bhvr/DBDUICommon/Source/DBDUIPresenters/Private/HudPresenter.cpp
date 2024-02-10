#include "HudPresenter.h"

class APawn;

void UHudPresenter::OnPawnUnpossessed(APawn* pawn)
{

}

void UHudPresenter::OnPawnPossessed(APawn* pawn)
{

}

void UHudPresenter::OnLocallyObservedChanged()
{

}

bool UHudPresenter::IsVisibleForCurrentGameMode() const
{
	return false;
}

bool UHudPresenter::IsPendingPawnReady() const
{
	return false;
}

bool UHudPresenter::IsHudReady()
{
	return false;
}

UHudPresenter::UHudPresenter()
{
	this->HudParentContainer = EHudParentContainerType::Widget;
	this->_pendingCharacter = NULL;
	this->_presentedCharacter = NULL;
	this->_spectatorPawn = NULL;
	this->_hudScreen = NULL;
	this->_rootWidget = NULL;
}
