#include "DBDActorVariationSpawnerActor2.h"
#include "ActorVariationSpawner.h"

ADBDActorVariationSpawnerActor2::ADBDActorVariationSpawnerActor2()
{
	this->actorVariationSpawnerComponent = CreateDefaultSubobject<UActorVariationSpawner>(TEXT("ActorVariationSpawnerComponent"));
}
