#include "CoreMemoryRemoveStatusEffectBehaviour.h"

UCoreMemoryRemoveStatusEffectBehaviour::UCoreMemoryRemoveStatusEffectBehaviour()
{
	this->_statusEffectToRemoveOnFragmentCollected = NULL;
	this->_statusEffectToRemoveOnMemoryAcquired = NULL;
	this->_statusEffectToRemoveOnStartedSynchronizingMemory = NULL;
	this->_statusEffectToRemoveOnMemorySynchronized = NULL;
}
