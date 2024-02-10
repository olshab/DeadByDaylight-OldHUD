#include "GameObjectQuery.h"

FGameObjectQuery::FGameObjectQuery()
{
	this->Type = ENearGameObjectQuestObjectType::Generator;
	this->GameplayTagQuery = FGameplayTagQuery{};
}
