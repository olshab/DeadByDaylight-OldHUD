#include "Premonition.h"

void UPremonition::Multicast_OnPerkActivate_Implementation()
{

}

float UPremonition::GetPerkFrequencyAtLevel() const
{
	return 0.0f;
}

float UPremonition::GetPerkEffectRange() const
{
	return 0.0f;
}

UPremonition::UPremonition()
{
	this->_perkFrequency = 0.000000;
	this->_perkEffectRange = 3600.000000;
}
