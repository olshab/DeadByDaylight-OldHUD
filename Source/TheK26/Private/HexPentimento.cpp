#include "HexPentimento.h"

UHexPentimento::UHexPentimento()
{
	this->_rekindleInteractionClass = NULL;
	this->_blockedTotems = TArray<ATotem*>();
	this->_statusEffectClasses = TArray<TSubclassOf<UStatusEffect>>();
}
