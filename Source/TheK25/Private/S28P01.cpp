#include "S28P01.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class UChargeableComponent;

void US28P01::OnRep_IsPerkActive() const
{

}

void US28P01::OnRep_InteractionAttacherComponent()
{

}

void US28P01::OnInteractionChargeChanged(UChargeableComponent* chargeableComponent, float totalPercentComplete)
{

}

float US28P01::GetAuraRevealRange() const
{
	return 0.0f;
}

float US28P01::GetAuraRevealDuration() const
{
	return 0.0f;
}

void US28P01::Authority_OnS28P01InteractionStart(ADBDPlayer* player)
{

}

void US28P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(US28P01, _isPerkActive);
	DOREPLIFETIME(US28P01, _interactionAttacherComponent);
}

US28P01::US28P01()
{
	this->_auraRevealDuration = 0.000000;
	this->_auraRevealRange = 0.000000;
	this->_S28P01InteractionClass = NULL;
	this->_S28P01ChargeableComponent = NULL;
	this->_S28P01Interaction = NULL;
	this->_isPerkActive = false;
	this->_interactionAttacherComponent = NULL;
	this->_playerOwner = NULL;
}
