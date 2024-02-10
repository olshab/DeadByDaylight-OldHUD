#include "HudTutorialObjectivesPresenter.h"

bool UHudTutorialObjectivesPresenter::IsInTutorial() const
{
	return false;
}

UHudTutorialObjectivesPresenter::UHudTutorialObjectivesPresenter()
{
	this->TutorialObjectivesWidgetClass = NULL;
}
