#include "HudPeekingPromptsPresenter.h"
#include "ELeanState.h"

void UHudPeekingPromptsPresenter::UpdatePeekingState(ELeanState potentialLeanState)
{

}

void UHudPeekingPromptsPresenter::HandleBestPlayerInteractionsChanged()
{

}

bool UHudPeekingPromptsPresenter::CanPlayerLean() const
{
	return false;
}

UHudPeekingPromptsPresenter::UHudPeekingPromptsPresenter()
{
	this->LeaningArrowsWidgetClass = NULL;
}
