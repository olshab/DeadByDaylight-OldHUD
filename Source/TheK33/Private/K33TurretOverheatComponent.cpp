#include "K33TurretOverheatComponent.h"
#include "Net/UnrealNetwork.h"

void UK33TurretOverheatComponent::OnRep_CurrentHeatAmount()
{

}

void UK33TurretOverheatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33TurretOverheatComponent, _currentHeatAmount);
}

UK33TurretOverheatComponent::UK33TurretOverheatComponent()
{
	this->_currentHeatAmount = 0.000000;
}
