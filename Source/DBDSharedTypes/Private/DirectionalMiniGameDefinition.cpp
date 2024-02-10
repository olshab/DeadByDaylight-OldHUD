#include "DirectionalMiniGameDefinition.h"

FDirectionalMiniGameDefinition::FDirectionalMiniGameDefinition()
{
	this->KeysPerSequenceCount = 0;
	this->IsSequenceRandom = false;
	this->Sequence = TArray<EDirectionalInputKey>();
	this->Type = EDirectionalMiniGameType::None;
}
