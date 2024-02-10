#include "GameTypeModifierDefaults.h"

UGameTypeModifierDefaults::UGameTypeModifierDefaults()
{
	this->Modifiers = TMap<EGameTypeModifierName, FTypeFlexibleTunable>();
}
