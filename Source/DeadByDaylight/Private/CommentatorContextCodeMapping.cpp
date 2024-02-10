#include "CommentatorContextCodeMapping.h"

FCommentatorContextCodeMapping::FCommentatorContextCodeMapping()
{
	this->GameEventTag = FGameplayTag{};
	this->CommentatorContextCode = ECommentatorContextCode::AnyRole_Start;
	this->RequiredPlayerTeam = EPlayerTeam::VE_None;
}
