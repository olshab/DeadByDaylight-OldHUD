#include "CloakComponent.h"
#include "Net/UnrealNetwork.h"

void UCloakComponent::OnRep_IsCloaked()
{

}

void UCloakComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCloakComponent, _isCloaked);
}

UCloakComponent::UCloakComponent()
{
	this->_isCloaked = false;
	this->_cloakInteraction = NULL;
	this->_uncloakInteraction = NULL;
}
