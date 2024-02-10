#include "S39P02.h"
#include "ETrapRemovedReason.h"
#include "Net/UnrealNetwork.h"

class AInteractable;
class APallet;
class ADBDPlayer;
class ATrapChemicalBomb;

void US39P02::Multicast_Cosmetic_OnTrapTriggered_Implementation(const AInteractable* pallet, const ADBDPlayer* triggerer)
{

}

void US39P02::Multicast_Cosmetic_OnTrapRemoved_Implementation(AInteractable* interactable, ETrapRemovedReason removedReason)
{

}

void US39P02::Multicast_Cosmetic_OnTrapActivated_Implementation(const APallet* generator)
{

}

void US39P02::Multicast_Cosmetic_OnSlowEffectEnded_Implementation(const ADBDPlayer* player)
{

}

float US39P02::GetSlowTime() const
{
	return 0.0f;
}

ATrapChemicalBomb* US39P02::GetChemicalBombTrap() const
{
	return NULL;
}

void US39P02::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US39P02, _trapChemicalBomb);
}

US39P02::US39P02()
{
	this->_invalidEventTypes = TArray<FGameplayTag>();
	this->_slowTime = 4.000000;
	this->_slowAmount = -0.500000;
	this->_slowEffect = NULL;
	this->_slowStatusEffect = NULL;
	this->_trapBombClass = NULL;
	this->_trapChemicalBomb = NULL;
}
