#include "CommentatorAudioContext.h"

FCommentatorAudioContext::FCommentatorAudioContext()
{
	this->AudioEvents = TArray<FAkEventWithSubtitle>();
	this->PlayProbability = 0;
	this->Delay = FInt32Range{};
	this->NumMatchesBeforeContextRepeat = 0;
	this->NumOccurencesBeforeEventRepeat = 0;
}
