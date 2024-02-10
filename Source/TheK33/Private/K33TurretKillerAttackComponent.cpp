#include "K33TurretKillerAttackComponent.h"
#include "Net/UnrealNetwork.h"

void UK33TurretKillerAttackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33TurretKillerAttackComponent, _isAttacking);
}

UK33TurretKillerAttackComponent::UK33TurretKillerAttackComponent()
{
	this->_isAttacking = false;
	this->_bipedRaycastProperties = TArray<FRaycastProperties>();
	this->_quadrupedRaycastProperties = TArray<FRaycastProperties>();
	this->_sphereTraceRadius = 3.000000;
}
