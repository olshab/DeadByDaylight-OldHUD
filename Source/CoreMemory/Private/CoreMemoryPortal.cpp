#include "CoreMemoryPortal.h"
#include "Interactor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "CoreMemoryPortalComponent.h"
#include "ChargeableComponent.h"
#include "CoreMemoryPortalFXComponent.h"
#include "SynchronizeCoreMemoryInteraction.h"

class ADBDPlayer;

void ACoreMemoryPortal::OnInteractionStarted(ADBDPlayer* player)
{

}

ACoreMemoryPortal::ACoreMemoryPortal()
{
	this->_coreMemoryPortalStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CoreMemoryStaticMeshComponent"));
	this->_coreMemoryPortalComponent = CreateDefaultSubobject<UCoreMemoryPortalComponent>(TEXT("CoreMemoryPortalComponent"));
	this->_coreMemoryPortalFXComponent = CreateDefaultSubobject<UCoreMemoryPortalFXComponent>(TEXT("CoreMemoryPortalFXComponent"));
	this->_synchronizeCoreMemoryInteractor = CreateDefaultSubobject<UInteractor>(TEXT("SynchronizeCoreMemoryInteractor"));
	this->_synchronizeCoreMemoryInteraction = CreateDefaultSubobject<USynchronizeCoreMemoryInteraction>(TEXT("SynchronizeCoreMemoryInteraction"));
	this->_synchronizeCoreMemoryInteractionKiller = CreateDefaultSubobject<USynchronizeCoreMemoryInteraction>(TEXT("SynchronizeCoreMemoryInteractionKiller"));
	this->_synchronizeCoreMemoryInteractionChargeable = CreateDefaultSubobject<UChargeableComponent>(TEXT("SynchronizeCoreMemoryInteractionChargeable"));
	this->_synchronizeCoreMemoryInteractionChargeableKiller = CreateDefaultSubobject<UChargeableComponent>(TEXT("SynchronizeCoreMemoryInteractionChargeableKiller"));
	this->_synchronizeCoreMemoryInteractionZone = CreateDefaultSubobject<UBoxComponent>(TEXT("SynchronizeCoreMemoryInteractionZone"));
}
