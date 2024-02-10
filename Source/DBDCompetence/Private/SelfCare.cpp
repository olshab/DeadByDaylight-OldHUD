#include "SelfCare.h"
#include "Net/UnrealNetwork.h"

void USelfCare::OnRep_InteractionAttacherComponent()
{

}

void USelfCare::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USelfCare, _interactionAttacherComponent);
}

USelfCare::USelfCare()
{
	this->_selfHealNoMedkitSpeedPenaltyEffectClass = NULL;
	this->_selfHealSpeedPenalty = 0.000000;
	this->_selfCareInteraction = NULL;
	this->_interactionAttacherComponent = NULL;
}
