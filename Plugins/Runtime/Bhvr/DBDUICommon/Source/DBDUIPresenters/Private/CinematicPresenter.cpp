#include "CinematicPresenter.h"

void UCinematicPresenter::OnWidgetFadeOutAnimationDone()
{

}

void UCinematicPresenter::OnWidgetFadeInAnimationDone()
{

}

void UCinematicPresenter::OnSubtitlesUpdated(const TArray<FString>& subtitles)
{

}

void UCinematicPresenter::OnSkipButtonClicked()
{

}

void UCinematicPresenter::OnPlaybackStarted()
{

}

void UCinematicPresenter::OnPlaybackDone()
{

}

void UCinematicPresenter::MuteGameAudio(const bool shouldMute)
{

}

void UCinematicPresenter::DBD_StopVideoPlayer()
{

}

void UCinematicPresenter::DBD_ChangeVideoVolume(float volume)
{

}

void UCinematicPresenter::DBD_ChangeVideoPlaybackMode(const FString& mode)
{

}

UCinematicPresenter::UCinematicPresenter()
{
	this->CinematicWidgetClass = NULL;
	this->_subtitlesManager = NULL;
}
