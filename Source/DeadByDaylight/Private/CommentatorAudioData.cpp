#include "CommentatorAudioData.h"

UCommentatorAudioData::UCommentatorAudioData()
{
	this->_commentatorAudioContexts = TMap<ECommentatorContextCode, FCommentatorAudioContext>();
	this->_commentatorActorClass = NULL;
	this->_commentatorSpawnStrategy = NULL;
}
