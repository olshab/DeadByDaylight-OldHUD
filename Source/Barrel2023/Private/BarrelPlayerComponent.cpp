#include "BarrelPlayerComponent.h"
#include "EBarrelType.h"
#include "Net/UnrealNetwork.h"

void UBarrelPlayerComponent::Server_SetCharmInfo_Implementation(const bool isRedUnlocked, const bool isGreenUnlocked, const bool isBlueUnlocked)
{

}

TArray<EBarrelType> UBarrelPlayerComponent::GetInteractedBarrels()
{
	return TArray<EBarrelType>();
}

void UBarrelPlayerComponent::DBD_BarrelResetInteractedBarrels()
{

}

void UBarrelPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UBarrelPlayerComponent, _interactedBarrels);
}

UBarrelPlayerComponent::UBarrelPlayerComponent()
{
	this->_interactedBarrels = TArray<EBarrelType>();
}
