#include "CoreMemoryFragment.h"
#include "UObject/NoExportTypes.h"
#include "Components/SphereComponent.h"
#include "CoreMemoryFragmentFXComponent.h"
#include "DBDOutlineComponent.h"
#include "Net/UnrealNetwork.h"
#include "Components/StaticMeshComponent.h"
#include "CoreMemoryFragmentComponent.h"
#include "GameplayTagContainerComponent.h"
#include "ActivatorComponent.h"

void ACoreMemoryFragment::OnRep_SpawnRotation(const FRotator& rotation)
{

}

void ACoreMemoryFragment::OnRep_SpawnLocation(const FVector& location)
{

}

void ACoreMemoryFragment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ACoreMemoryFragment, _spawnLocation);
	DOREPLIFETIME(ACoreMemoryFragment, _spawnRotation);
}

ACoreMemoryFragment::ACoreMemoryFragment()
{
	this->_coreMemoryFragmentStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoreMemoryFragmentStaticMesh"));
	this->_coreMemoryTendrilStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoreMemoryTendrilStaticMesh"));
	this->_coreMemoryFragmentComponent = CreateDefaultSubobject<UCoreMemoryFragmentComponent>(TEXT("CoreMemoryFragmentComponent"));
	this->_coreMemoryFragmentFXComponent = CreateDefaultSubobject<UCoreMemoryFragmentFXComponent>(TEXT("CoreMemoryFragmentFXComponent"));
	this->_coreMemoryFragmentTriggerZone = CreateDefaultSubobject<USphereComponent>(TEXT("CoreMemoryFragmentComponentTriggerZone"));
	this->_coreMemoryFragmentCollectionZone = CreateDefaultSubobject<USphereComponent>(TEXT("CoreMemoryFragmentComponentCollectionZone"));
	this->_outlineComponent = CreateDefaultSubobject<UDBDOutlineComponent>(TEXT("CoreMemoryFragmentOutline"));
	this->_objectState = CreateDefaultSubobject<UGameplayTagContainerComponent>(TEXT("ObjectState"));
	this->_activator = CreateDefaultSubobject<UActivatorComponent>(TEXT("Activator"));
}
