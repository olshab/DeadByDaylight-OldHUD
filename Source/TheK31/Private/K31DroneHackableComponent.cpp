#include "K31DroneHackableComponent.h"
#include "Net/UnrealNetwork.h"

void UK31DroneHackableComponent::OnRep_IsHackable()
{

}

bool UK31DroneHackableComponent::IsHackable() const
{
	return false;
}

void UK31DroneHackableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31DroneHackableComponent, _isHackable);
}

UK31DroneHackableComponent::UK31DroneHackableComponent()
{
	this->_isHackable = false;
}
