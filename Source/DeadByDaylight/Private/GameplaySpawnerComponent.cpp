#include "GameplaySpawnerComponent.h"
#include "Net/UnrealNetwork.h"

void UGameplaySpawnerComponent::OnRep_SpawnedComponents()
{

}

void UGameplaySpawnerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UGameplaySpawnerComponent, _spawnedComponents);
	DOREPLIFETIME(UGameplaySpawnerComponent, _numComponentsSpawned);
	DOREPLIFETIME(UGameplaySpawnerComponent, _numComponentsToSpawn);
}

UGameplaySpawnerComponent::UGameplaySpawnerComponent()
{
	this->_spawnedComponents = TArray<UActorComponent*>();
	this->_numComponentsSpawned = 0;
	this->_numComponentsToSpawn = 0;
}
