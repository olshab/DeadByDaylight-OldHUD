#include "EventSpawnableStaticMeshActor.h"
#include "EventSpawnableComponent.h"

AEventSpawnableStaticMeshActor::AEventSpawnableStaticMeshActor()
{
	this->_eventSpawnableComponent = CreateDefaultSubobject<UEventSpawnableComponent>(TEXT("EventSpawnableComponent"));
}
