#include "K32OverclockStatusEffectBase.h"

class APallet;
class ASlasherPlayer;

void UK32OverclockStatusEffectBase::Multicast_DestroyPallet_Implementation(APallet* pallet, ASlasherPlayer* killer) const
{

}

UK32OverclockStatusEffectBase::UK32OverclockStatusEffectBase()
{
	this->_overheatStatusEffect = NULL;
}
