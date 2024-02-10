#include "K33TurretDamageComponent.h"
#include "Net/UnrealNetwork.h"

void UK33TurretDamageComponent::OnRep_IsAttackedByTurret()
{

}

void UK33TurretDamageComponent::OnRep_CurrentDamageAmount()
{

}

void UK33TurretDamageComponent::Multicast_ReceivedMaxDamage_Implementation()
{

}

void UK33TurretDamageComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33TurretDamageComponent, _currentDamageAmount);
	DOREPLIFETIME(UK33TurretDamageComponent, _isAttackedByTurret);
}

UK33TurretDamageComponent::UK33TurretDamageComponent()
{
	this->_currentDamageAmount = 0.000000;
	this->_stunnedAfterFullyDamagedEffect = NULL;
	this->_damageRatePerTurretCurveFloat = NULL;
}
