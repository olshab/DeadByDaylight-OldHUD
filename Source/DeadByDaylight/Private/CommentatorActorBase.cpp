#include "CommentatorActorBase.h"
#include "AkComponent.h"

ACommentatorActorBase::ACommentatorActorBase()
{
	this->_audioComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AudioComponent"));
}
