#include "CoreMemoryDefaultTriggerBehaviour.h"
#include "Engine/EngineTypes.h"

class ACoreMemoryFragment;
class UPrimitiveComponent;
class AActor;

void UCoreMemoryDefaultTriggerBehaviour::Authority_OnTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UCoreMemoryDefaultTriggerBehaviour::Authority_OnTriggerZoneEntered(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UCoreMemoryDefaultTriggerBehaviour::Authority_CheckLineOfSight(const ACoreMemoryFragment* fragment)
{

}

UCoreMemoryDefaultTriggerBehaviour::UCoreMemoryDefaultTriggerBehaviour()
{
	this->_authority_lineOfSightTimerRate = 0.160000;
}
