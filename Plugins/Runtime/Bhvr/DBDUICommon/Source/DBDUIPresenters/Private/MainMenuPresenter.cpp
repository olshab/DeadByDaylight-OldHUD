#include "MainMenuPresenter.h"
#include "EGameType.h"
#include "EMenuOpened.h"
#include "EDBDCameraViewType.h"
#include "NewsContentDetails.h"

void UMainMenuPresenter::OnTutorialButtonClicked()
{

}

void UMainMenuPresenter::OnStoreButtonClicked()
{

}

void UMainMenuPresenter::OnSettingsButtonClicked()
{

}

void UMainMenuPresenter::OnPlaySurvivorButtonClicked(EGameType gameType)
{

}

void UMainMenuPresenter::OnPlayLimitedTimeEventSurvivorButtonClicked(EGameType gameType, const FName& eventId)
{

}

void UMainMenuPresenter::OnPlayLimitedTimeEventKillerButtonClicked(EGameType gameType, const FName& eventId)
{

}

void UMainMenuPresenter::OnPlayKillerButtonClicked(EGameType gameType)
{

}

void UMainMenuPresenter::OnPlayCustomButtonClicked(EGameType gameType)
{

}

void UMainMenuPresenter::OnNewsContentReceived(bool success, const TArray<FNewsContentDetails>& receivedNewsData, const int32 newsHighestWeight)
{

}

void UMainMenuPresenter::OnNewsButtonClicked()
{

}

void UMainMenuPresenter::OnMainMenuFadeCompleted(EDBDCameraViewType view)
{

}

void UMainMenuPresenter::OnLTESubMenuOpeningChanged(EMenuOpened menuOpened)
{

}

void UMainMenuPresenter::OnFriendsButtonClicked()
{

}

void UMainMenuPresenter::OnExitButtonClicked()
{

}

void UMainMenuPresenter::OnEventButtonClicked()
{

}

void UMainMenuPresenter::OnDailyRitualsButtonClicked()
{

}

void UMainMenuPresenter::OnCreditsButtonClicked()
{

}

void UMainMenuPresenter::OnCreatePartyCompleted(bool success, const int32 idToTransitionTo)
{

}

void UMainMenuPresenter::OnChangeAccountClicked()
{

}

void UMainMenuPresenter::OnArchivesButtonClicked()
{

}

UMainMenuPresenter::UMainMenuPresenter()
{
	this->MainMenuWidgetClass = NULL;
}
