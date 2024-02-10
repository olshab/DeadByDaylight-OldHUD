#include "SubtitlesEntry.h"

FSubtitlesEntry::FSubtitlesEntry()
{
	this->subtitle = TEXT("");
	this->isAOneLiner = false;
	this->hasDurationOverride = false;
	this->durationOverride = 0.0f;
}
