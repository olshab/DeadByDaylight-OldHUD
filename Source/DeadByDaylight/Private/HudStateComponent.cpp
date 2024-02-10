#include "HudStateComponent.h"
#include "Net/UnrealNetwork.h"

void UHudStateComponent::OnRep_IsHudVisible(const bool oldValue)
{

}

void UHudStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UHudStateComponent, _isHudVisible);
}

UHudStateComponent::UHudStateComponent()
{
	this->_isHudVisible = true;
}
