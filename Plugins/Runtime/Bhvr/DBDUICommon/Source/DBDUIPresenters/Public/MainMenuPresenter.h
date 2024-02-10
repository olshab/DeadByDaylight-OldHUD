#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "EGameType.h"
#include "EMenuOpened.h"
#include "EDBDCameraViewType.h"
#include "NewsContentDetails.h"
#include "MainMenuPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UMainMenuPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> MainMenuWidgetClass;

private:
	UFUNCTION()
	void OnTutorialButtonClicked();

	UFUNCTION()
	void OnStoreButtonClicked();

	UFUNCTION()
	void OnSettingsButtonClicked();

	UFUNCTION()
	void OnPlaySurvivorButtonClicked(EGameType gameType);

	UFUNCTION()
	void OnPlayLimitedTimeEventSurvivorButtonClicked(EGameType gameType, const FName& eventId);

	UFUNCTION()
	void OnPlayLimitedTimeEventKillerButtonClicked(EGameType gameType, const FName& eventId);

	UFUNCTION()
	void OnPlayKillerButtonClicked(EGameType gameType);

	UFUNCTION()
	void OnPlayCustomButtonClicked(EGameType gameType);

	UFUNCTION()
	void OnNewsContentReceived(bool success, const TArray<FNewsContentDetails>& receivedNewsData, const int32 newsHighestWeight);

	UFUNCTION()
	void OnNewsButtonClicked();

	UFUNCTION()
	void OnMainMenuFadeCompleted(EDBDCameraViewType view);

	UFUNCTION()
	void OnLTESubMenuOpeningChanged(EMenuOpened menuOpened);

	UFUNCTION()
	void OnFriendsButtonClicked();

	UFUNCTION()
	void OnExitButtonClicked();

	UFUNCTION()
	void OnEventButtonClicked();

	UFUNCTION()
	void OnDailyRitualsButtonClicked();

	UFUNCTION()
	void OnCreditsButtonClicked();

	UFUNCTION()
	void OnCreatePartyCompleted(bool success, const int32 idToTransitionTo);

	UFUNCTION()
	void OnChangeAccountClicked();

	UFUNCTION()
	void OnArchivesButtonClicked();

public:
	UMainMenuPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UMainMenuPresenter) { return 0; }
