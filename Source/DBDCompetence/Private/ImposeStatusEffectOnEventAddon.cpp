#include "ImposeStatusEffectOnEventAddon.h"

UImposeStatusEffectOnEventAddon::UImposeStatusEffectOnEventAddon()
{
	this->_requireEventInstigatorToMatchAddonOwnerToImposeStatusEffects = false;
	this->_requireEventTargetToMatchAddonOwnerToImposeStatusEffects = false;
	this->_statusEffects = TArray<FStatusEffectInfo>();
}
