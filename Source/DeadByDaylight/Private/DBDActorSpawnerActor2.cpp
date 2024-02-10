#include "DBDActorSpawnerActor2.h"
#include "ActorSpawner.h"

ADBDActorSpawnerActor2::ADBDActorSpawnerActor2()
{
	this->actorSpawnerComponent = CreateDefaultSubobject<UActorSpawner>(TEXT("ActorSpawnerComponent"));
}
