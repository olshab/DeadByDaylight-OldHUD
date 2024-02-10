#include "WormholeFatherRoomZoneOverlap.h"
#include "Engine/EngineTypes.h"
#include "SpherePlayerOverlapComponent.h"

class UPrimitiveComponent;
class AActor;

void AWormholeFatherRoomZoneOverlap::OnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void AWormholeFatherRoomZoneOverlap::OnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

AWormholeFatherRoomZoneOverlap::AWormholeFatherRoomZoneOverlap()
{
	this->_wormholeFatherRoomZone = CreateDefaultSubobject<USpherePlayerOverlapComponent>(TEXT("WrmFatherDeadBodyStaticMesh"));
}
