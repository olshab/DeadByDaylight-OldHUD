#include "AuthoritativeActorPoolComponent.h"
#include "Net/UnrealNetwork.h"

void UAuthoritativeActorPoolComponent::OnRep_ReplicatedPool()
{

}

void UAuthoritativeActorPoolComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UAuthoritativeActorPoolComponent, _replicatedPool);
}

UAuthoritativeActorPoolComponent::UAuthoritativeActorPoolComponent()
{
	this->_replicatedPool = TArray<AActor*>();
	this->_local_oldPool = TArray<AActor*>();
}
