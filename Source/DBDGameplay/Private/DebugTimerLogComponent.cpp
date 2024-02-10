#include "DebugTimerLogComponent.h"
#include "Net/UnrealNetwork.h"

void UDebugTimerLogComponent::OnRep_TimerCountdown()
{

}

void UDebugTimerLogComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDebugTimerLogComponent, _timerDisplayName);
	DOREPLIFETIME(UDebugTimerLogComponent, _timerCountdown);
	DOREPLIFETIME(UDebugTimerLogComponent, _timerRemainingPercent);
}

UDebugTimerLogComponent::UDebugTimerLogComponent()
{
	this->_timerDisplayName = TEXT("");
	this->_timerRemainingPercent = -1.000000;
}
