#include "CoreMainMenuWidget.h"
#include "EMainMenuButtonType.h"

class UCoreButtonWidget;
class UCoreBaseUserWidget;

void UCoreMainMenuWidget::OnTutorialButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnStoreButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnSettingsButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlaySurvivorButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlayLimitedTimeEventSurvivorButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlayLimitedTimeEventKillerButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlayLimitedTimeEventButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlayKillerButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlayCustomButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnPlayButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnNewsButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnFriendsButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnExitButtonTriggered()
{

}

void UCoreMainMenuWidget::OnExitButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnEventButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnDailyRitualsButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnCreditsButtonClicked(UCoreButtonWidget* target)
{

}

void UCoreMainMenuWidget::OnArchivesButtonClicked(UCoreButtonWidget* target)
{

}

bool UCoreMainMenuWidget::HasActiveLTE()
{
	return false;
}

UCoreBaseUserWidget* UCoreMainMenuWidget::GetButton(EMainMenuButtonType button)
{
	return NULL;
}

UCoreMainMenuWidget::UCoreMainMenuWidget()
{
	this->PlayButton = NULL;
	this->PlayLimitedTimeEventButton = NULL;
	this->TutorialButton = NULL;
	this->ArchivesButton = NULL;
	this->StoreButton = NULL;
	this->ChallengesButton = NULL;
	this->PlayKillerButton = NULL;
	this->PlaySurvivorButton = NULL;
	this->PlayCustomGameButton = NULL;
	this->PlayLimitedTimeEventKillerButton = NULL;
	this->PlayLimitedTimeEventSurvivorButton = NULL;
	this->EventButton = NULL;
	this->DailyRitualsButton = NULL;
	this->FriendsButton = NULL;
	this->SettingsButton = NULL;
	this->NewsButton = NULL;
	this->CreditsButton = NULL;
	this->MarketingInvitationButton = NULL;
	this->ExitButton = NULL;
	this->ChangeAccountInputSwitcher = NULL;
	this->_eventNames = TArray<FName>();
	this->_isChallengesButtonAvailable = false;
	this->PlayKillerButtons = TMap<FName, UCoreMainMenuButtonWidget*>();
	this->PlaySurvivorButtons = TMap<FName, UCoreMainMenuButtonWidget*>();
}
