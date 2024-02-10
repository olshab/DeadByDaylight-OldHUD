#include "AISkillDynamicSubtreeStruct.h"

FAISkillDynamicSubtreeStruct::FAISkillDynamicSubtreeStruct()
{
	this->AISkillDynamicSubtreeMap = TMap<UAISkill*, UBehaviorTree*>();
	this->ConnectingSubtree = NULL;
}
