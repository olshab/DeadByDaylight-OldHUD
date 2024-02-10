#include "BlightPower.h"
#include "EWallGrabState.h"
#include "Net/UnrealNetwork.h"
#include "PowerToggleComponent.h"
#include "PowerChargeComponent.h"
#include "ChargeableComponent.h"

void ABlightPower::OnRep_OverridenTimer() const
{

}

void ABlightPower::OnPowerStateChanged(const EWallGrabState previousState, const EWallGrabState newState)
{

}

void ABlightPower::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ABlightPower, _unlimitedDashesCooldownTimer);
}

ABlightPower::ABlightPower()
{
	this->_blightPowerCharge = CreateDefaultSubobject<UPowerChargeComponent>(TEXT("K21PowerCharge"));
	this->_blightPowerToggle = CreateDefaultSubobject<UPowerToggleComponent>(TEXT("K21PowerToggle"));
	this->_blightPowerActivateChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("K21PowerActivateChargeable"));
	this->_blightPowerStateComponent = NULL;
	this->_unlimitedDashesCooldownTimer = NULL;
	this->_inPowerEffect = NULL;
	this->_outOfPowerEffect = NULL;
}
