#include "SubtitlesPresenter.h"

void USubtitlesPresenter::OnEntryTimedOut()
{

}

bool USubtitlesPresenter::IsSubtitlesEnabled() const
{
	return false;
}

USubtitlesPresenter::USubtitlesPresenter()
{
	this->SubtitlesWidgetClass = NULL;
	this->NumberOfCharactersPerLine = 38;
	this->DurationPerLine = 2.500000;
	this->KeepSingleCharacter = true;
	this->_entryQueue = TArray<FSubtitlesEntry>();
}
