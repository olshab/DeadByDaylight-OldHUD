#include "SubtitlesDescription.h"

FSubtitlesDescription::FSubtitlesDescription()
{
	this->SubtitlesText = FText::GetEmpty();
	this->AudioEvent = NULL;
	this->durationOverride = TArray<float>();
}
