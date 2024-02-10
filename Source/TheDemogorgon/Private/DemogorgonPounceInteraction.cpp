#include "DemogorgonPounceInteraction.h"

void UDemogorgonPounceInteraction::OnCancelCooldownComplete_Implementation()
{

}

UDemogorgonPounceInteraction::UDemogorgonPounceInteraction()
{
	this->_demogorgonPounceFOVStatusEffectClass = NULL;
	this->_chargedAttackState = NULL;
	this->_owningSlasher = NULL;
}
