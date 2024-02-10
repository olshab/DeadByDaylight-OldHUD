#include "Distortion.h"
#include "Net/UnrealNetwork.h"

void UDistortion::OnRep_AuraBlockIsActive()
{

}

float UDistortion::GetRegainTokenDurationTimer() const
{
	return 0.0f;
}

float UDistortion::GetActivationDurationAtLevel() const
{
	return 0.0f;
}

bool UDistortion::AuraBlockCanBeActive() const
{
	return false;
}

void UDistortion::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDistortion, _auraBlockIsActive);
}

UDistortion::UDistortion()
{
	this->_activationDurations = 0.000000;
	this->_auraBlockIsActive = false;
	this->_regainTokenDurationTimer = 15.000000;
}
