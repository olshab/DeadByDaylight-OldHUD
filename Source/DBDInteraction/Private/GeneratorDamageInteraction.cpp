#include "GeneratorDamageInteraction.h"

UGeneratorDamageInteraction::UGeneratorDamageInteraction()
{
	this->_canceledSfxBasedOnKiller = TMap<FGameplayTag, UAkAudioEvent*>();
}
