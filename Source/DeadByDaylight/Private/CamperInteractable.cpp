#include "CamperInteractable.h"
#include "ActivatorComponent.h"
#include "ChargeableComponent.h"
#include "Interactor.h"

class ACamperPlayer;
class UInteractionDefinition;

void ACamperInteractable::UpdateTargetHPSlot()
{

}

void ACamperInteractable::SetKillInteraction(UInteractionDefinition* killInteraction)
{

}

void ACamperInteractable::ServerMoveOut_Implementation()
{

}

bool ACamperInteractable::ServerMoveOut_Validate()
{
	return true;
}

ACamperPlayer* ACamperInteractable::GetOwningSurvivor() const
{
	return NULL;
}

ACamperInteractable::ACamperInteractable()
{
	this->HealingInteractors = TArray<UInteractor*>();
	this->_healInteractions = TArray<UChargeableInteractionDefinition*>();
	this->_killCharge = CreateDefaultSubobject<UChargeableComponent>(TEXT("KillCharge"));
	this->_activator = CreateDefaultSubobject<UActivatorComponent>(TEXT("Activator"));
	this->_killInteractor = NULL;
	this->_killInteractionZone = NULL;
	this->_killHealthyInteractionZone = NULL;
	this->_healingInteractor1 = CreateDefaultSubobject<UInteractor>(TEXT("HealingInteractor1"));
	this->_killerInteractor = NULL;
	this->_killerInteractionZone = NULL;
}
