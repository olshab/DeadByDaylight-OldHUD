#include "SignificanceManagerComponent.h"
#include "Net/UnrealNetwork.h"

void USignificanceManagerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USignificanceManagerComponent, _dependentActorsToCheckSignficance);
}

USignificanceManagerComponent::USignificanceManagerComponent()
{
	this->_significanceStrategy = NULL;
	this->_dependentActorsToCheckSignficance = TArray<AActor*>();
}
