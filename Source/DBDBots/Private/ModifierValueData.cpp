#include "ModifierValueData.h"

FModifierValueData::FModifierValueData()
{
	this->ModifierTag = FGameplayTag{};
	this->EstimateWithSemantics = false;
	this->SemanticTag = FGameplayTag{};
	this->UsesItemAddons = false;
}
