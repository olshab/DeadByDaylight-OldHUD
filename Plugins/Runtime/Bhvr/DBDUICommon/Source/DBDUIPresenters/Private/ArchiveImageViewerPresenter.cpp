#include "ArchiveImageViewerPresenter.h"

void UArchiveImageViewerPresenter::OnTextVisibilityChanged()
{

}

void UArchiveImageViewerPresenter::OnImageViewerVoiceOverPlayed()
{

}

void UArchiveImageViewerPresenter::OnImageViewerVoiceOverAutoplay(bool autoplay)
{

}

void UArchiveImageViewerPresenter::OnBackAction()
{

}

void UArchiveImageViewerPresenter::OnArchivesVoiceOverPlayed(bool playing)
{

}

void UArchiveImageViewerPresenter::OnArchivesVoiceOverAutoplay(bool autoplay)
{

}

bool UArchiveImageViewerPresenter::CanShowFullScreenMode() const
{
	return false;
}

UArchiveImageViewerPresenter::UArchiveImageViewerPresenter()
{
	this->ArchiveImageViewerWidgetClass = NULL;
}
