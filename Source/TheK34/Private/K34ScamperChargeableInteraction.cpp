#include "K34ScamperChargeableInteraction.h"
#include "Net/UnrealNetwork.h"

class UInteractionDefinition;

void UK34ScamperChargeableInteraction::Server_ActivateChaining_Implementation(UInteractionDefinition* chainInteraction)
{

}

void UK34ScamperChargeableInteraction::OnRep_CurrentPhase()
{

}

void UK34ScamperChargeableInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK34ScamperChargeableInteraction, _currentPhase);
}

UK34ScamperChargeableInteraction::UK34ScamperChargeableInteraction()
{
	this->_currentPhase = EScamperPhase::Charging;
	this->_scamperMovementSpeedSettings = TMap<EScamperPhase, FK34ScamperMovementSpeedSetting>();
	this->_chainVaultDetectionRange = 90.000000;
	this->_serverChainVaultDetectionRange = 500.000000;
	this->_chainVaultSweepRadius = 60.000000;
	this->_cameraTransitionToThirdPersonViewDuration = 1.000000;
}
