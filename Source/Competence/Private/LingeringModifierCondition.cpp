#include "LingeringModifierCondition.h"
#include "Net/UnrealNetwork.h"

void ULingeringModifierCondition::OnTimerEnd()
{

}

void ULingeringModifierCondition::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULingeringModifierCondition, _timeConditionIsTracked);
}

ULingeringModifierCondition::ULingeringModifierCondition()
{
	this->_timeConditionIsTracked = 3.000000;
}
