#include "Addon_K27Power_09StatusEffect.h"

class ACamperPlayer;

void UAddon_K27Power_09StatusEffect::Authority_OnSurviorCondemnChange(ACamperPlayer* player, float condemnLevel)
{

}

UAddon_K27Power_09StatusEffect::UAddon_K27Power_09StatusEffect()
{
	this->_condemnNeededForBlind = 4.000000;
	this->_blindnessEffect = NULL;
	this->_blindnessStatusEffectClass = NULL;
}
