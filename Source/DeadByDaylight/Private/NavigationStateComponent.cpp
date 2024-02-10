#include "NavigationStateComponent.h"
#include "Net/UnrealNetwork.h"
#include "GuidingInfo.h"
#include "EImmobilizedState.h"

void UNavigationStateComponent::OnRep_ImmobilizedState(EImmobilizedState previousState)
{

}

void UNavigationStateComponent::OnRep_GuidedState(const FGuidingInfo& previousState)
{

}

void UNavigationStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UNavigationStateComponent, _immobilizedState);
	DOREPLIFETIME(UNavigationStateComponent, _guidedState);
}

UNavigationStateComponent::UNavigationStateComponent()
{
	this->_immobilizedState = EImmobilizedState::VE_None;
	this->_local_oldGuidedPlayers = TArray<ADBDPlayer*>();
}
