#include "DisplayStandMeatHookOverride.h"

FDisplayStandMeatHookOverride::FDisplayStandMeatHookOverride()
{
	this->OverrideId = TEXT("");
	this->OverrideType = EDisplayStandMeatHookOverrideType::ForCharacter;
	this->CharacterIndex = 0;
	this->EventName = NAME_None;
	this->HookToUse = NULL;
}
