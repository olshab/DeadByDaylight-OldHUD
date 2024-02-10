#include "CondemnedComponent.h"
#include "Net/UnrealNetwork.h"

void UCondemnedComponent::OnRep_HoldingVHS()
{

}

void UCondemnedComponent::OnRep_CondemnedLevel(const float previousValue)
{

}

void UCondemnedComponent::OnLevelReadyToPlay()
{

}

bool UCondemnedComponent::IsHoldingVHS() const
{
	return false;
}

bool UCondemnedComponent::IsFullyCondemned() const
{
	return false;
}

bool UCondemnedComponent::IsCondemned() const
{
	return false;
}

float UCondemnedComponent::GetLockedCondemnedPercent() const
{
	return 0.0f;
}

float UCondemnedComponent::GetCondemnedPercent() const
{
	return 0.0f;
}

float UCondemnedComponent::GetCondemnedLevel() const
{
	return 0.0f;
}

void UCondemnedComponent::DBD_SetCondemnMoriableAndDownAllSurvivors()
{

}

void UCondemnedComponent::DBD_SetCondemnedLevel(const float level)
{

}

void UCondemnedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCondemnedComponent, _condemnedLevel);
	DOREPLIFETIME(UCondemnedComponent, _lockedCondemnedLevel);
	DOREPLIFETIME(UCondemnedComponent, _previousReasonForCondemn);
	DOREPLIFETIME(UCondemnedComponent, _isHoldingVHS);
}

UCondemnedComponent::UCondemnedComponent()
{
	this->_analyticScoreTag = TArray<FGameplayTag>();
	this->_condemnedLevel = 0.000000;
	this->_lockedCondemnedLevel = 0.000000;
	this->_previousReasonForCondemn = ECondemnOrigin::None;
	this->_isHoldingVHS = false;
	this->_condemnKillerInstinctEffectClass = NULL;
	this->_condemnKillerInstinctEffect = NULL;
	this->_reactivateCondemnProgressEvents = TArray<FGameplayTag>();
}
