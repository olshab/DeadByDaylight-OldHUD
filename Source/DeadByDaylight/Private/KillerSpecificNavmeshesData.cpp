#include "KillerSpecificNavmeshesData.h"

FKillerSpecificNavmeshesData::FKillerSpecificNavmeshesData()
{
	this->KillerPresenceTag = FGameplayTag{};
	this->NavmeshName = NAME_None;
	this->NavmeshIndex = 0;
}
