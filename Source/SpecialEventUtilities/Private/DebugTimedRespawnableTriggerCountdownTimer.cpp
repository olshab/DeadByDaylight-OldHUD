#include "DebugTimedRespawnableTriggerCountdownTimer.h"
#include "Net/UnrealNetwork.h"

void UDebugTimedRespawnableTriggerCountdownTimer::OnRep_CountdownTimeRemaining()
{

}

void UDebugTimedRespawnableTriggerCountdownTimer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDebugTimedRespawnableTriggerCountdownTimer, _countdownTimeRemaining);
}

UDebugTimedRespawnableTriggerCountdownTimer::UDebugTimedRespawnableTriggerCountdownTimer()
{
	this->_countdownTimeRemaining = 0.000000;
}
