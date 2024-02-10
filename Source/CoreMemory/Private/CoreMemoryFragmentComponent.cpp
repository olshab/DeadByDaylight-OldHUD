#include "CoreMemoryFragmentComponent.h"
#include "Net/UnrealNetwork.h"

void UCoreMemoryFragmentComponent::Server_OnFragmentCollected_Implementation()
{

}

void UCoreMemoryFragmentComponent::OnRep_WasTriggered()
{

}

void UCoreMemoryFragmentComponent::OnRep_WasCollected()
{

}

void UCoreMemoryFragmentComponent::OnRep_OwningPlayer()
{

}

void UCoreMemoryFragmentComponent::OnRep_IsDespawned()
{

}

void UCoreMemoryFragmentComponent::OnRep_Controller()
{

}

void UCoreMemoryFragmentComponent::OnLocallyObservedChanged(bool isLocallyObserved)
{

}

void UCoreMemoryFragmentComponent::Multicast_FragmentDespawnCountdown_Implementation(float floatVal) const
{

}

void UCoreMemoryFragmentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCoreMemoryFragmentComponent, _owningPlayer);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _controller);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _wasTriggered);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _isDespawned);
	DOREPLIFETIME(UCoreMemoryFragmentComponent, _wasCollected);
}

UCoreMemoryFragmentComponent::UCoreMemoryFragmentComponent()
{
	this->_owningPlayer = NULL;
	this->_controller = NULL;
	this->_wasTriggered = false;
	this->_isDespawned = false;
	this->_wasCollected = false;
}
