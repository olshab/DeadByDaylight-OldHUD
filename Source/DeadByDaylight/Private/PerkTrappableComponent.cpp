#include "PerkTrappableComponent.h"
#include "ETrapType.h"
#include "Net/UnrealNetwork.h"

void UPerkTrappableComponent::OnRep_TrapsOnInteractable()
{

}

bool UPerkTrappableComponent::HasTrap(const ETrapType trapType) const
{
	return false;
}

bool UPerkTrappableComponent::HasAnyTrap() const
{
	return false;
}

void UPerkTrappableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPerkTrappableComponent, _trapsOnInteractable);
}

UPerkTrappableComponent::UPerkTrappableComponent()
{
	this->_interactableType = NULL;
	this->_trapsOnInteractable = TArray<ETrapType>();
}
