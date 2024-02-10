#include "WormholeFatherHackingComponent.h"
#include "Net/UnrealNetwork.h"

void UWormholeFatherHackingComponent::SetHasBeenHacked(const bool hasBeenHacked)
{

}

void UWormholeFatherHackingComponent::OnRep_HasBeenHacked() const
{

}

bool UWormholeFatherHackingComponent::HasBeenHacked() const
{
	return false;
}

void UWormholeFatherHackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UWormholeFatherHackingComponent, _hasBeenHacked);
}

UWormholeFatherHackingComponent::UWormholeFatherHackingComponent()
{
	this->_hasBeenHacked = false;
}
