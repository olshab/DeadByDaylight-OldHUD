#include "DeadMansSwitch.h"
#include "Net/UnrealNetwork.h"

void UDeadMansSwitch::OnRep_BlockedGenerators()
{

}

float UDeadMansSwitch::GetActivationDurationAtLevel() const
{
	return 0.0f;
}

void UDeadMansSwitch::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDeadMansSwitch, _blockedGenerators);
}

UDeadMansSwitch::UDeadMansSwitch()
{
	this->_activationDurationByLevels = 0.000000;
	this->_anySurvivorLetGo = true;
	this->_blockedGenerators = TArray<AGenerator*>();
}
