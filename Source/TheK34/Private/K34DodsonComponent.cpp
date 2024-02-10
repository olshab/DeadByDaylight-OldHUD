#include "K34DodsonComponent.h"
#include "Net/UnrealNetwork.h"

void UK34DodsonComponent::OnRep_IsDodson()
{

}

bool UK34DodsonComponent::IsDodson()
{
	return false;
}

void UK34DodsonComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK34DodsonComponent, _isDodson);
}

UK34DodsonComponent::UK34DodsonComponent()
{
	this->_dodsonActorClass = NULL;
	this->_dodsonActor = NULL;
	this->_isDodson = false;
}
