#include "AdditionalDynamicSubtree.h"

FAdditionalDynamicSubtree::FAdditionalDynamicSubtree()
{
	this->DynamicSubtreeContexts = FGameplayTagContainer{};
	this->AlwaysEnable = false;
	this->DynamicSubtree = NULL;
}
