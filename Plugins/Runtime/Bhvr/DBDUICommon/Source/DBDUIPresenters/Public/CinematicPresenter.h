#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "CinematicPresenter.generated.h"

class USubtitlesManager;
class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UCinematicPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> CinematicWidgetClass;

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<USubtitlesManager> _subtitlesManager;

public:
	UFUNCTION()
	void OnWidgetFadeOutAnimationDone();

	UFUNCTION()
	void OnWidgetFadeInAnimationDone();

	UFUNCTION()
	void OnSubtitlesUpdated(const TArray<FString>& subtitles);

	UFUNCTION()
	void OnSkipButtonClicked();

	UFUNCTION()
	void OnPlaybackStarted();

	UFUNCTION()
	void OnPlaybackDone();

	UFUNCTION()
	void MuteGameAudio(const bool shouldMute);

private:
	UFUNCTION(Exec)
	void DBD_StopVideoPlayer();

	UFUNCTION(Exec)
	void DBD_ChangeVideoVolume(float volume);

	UFUNCTION(Exec)
	void DBD_ChangeVideoPlaybackMode(const FString& mode);

public:
	UCinematicPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UCinematicPresenter) { return 0; }
