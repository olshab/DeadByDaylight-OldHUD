#include "AkEventWithSubtitle.h"

FAkEventWithSubtitle::FAkEventWithSubtitle()
{
	this->AudioEvent = NULL;
	this->Weight = 0;
	this->HasSubtitles = false;
	this->RequiredAudioSwitch = TArray<FCustomSoundFXData>();
	this->ForbiddenAudioSwitch = TArray<FCustomSoundFXData>();
	this->DelayMsBeforeSubtitles = 0;
	this->SubtitleEventPriority = 0;
}
