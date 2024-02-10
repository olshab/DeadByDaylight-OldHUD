#include "GameTypeSettings.h"

FGameTypeSettings::FGameTypeSettings()
{
	this->GameType = EGameType::Online;
	this->Modifiers = TMap<EGameTypeModifierName, FTypeFlexibleTunable>();
	this->Mutators = TArray<FGameplayMutatorSpawnableComponent>();
}
