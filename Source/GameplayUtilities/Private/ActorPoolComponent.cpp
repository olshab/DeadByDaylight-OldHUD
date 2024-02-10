#include "ActorPoolComponent.h"

class AActor;

void UActorPoolComponent::OnActorsInPoolAcquiredChanged(bool acquired)
{

}

void UActorPoolComponent::OnActorDestroyed(AActor* destroyedActor)
{

}

UActorPoolComponent::UActorPoolComponent()
{
	this->_actorClass = NULL;
	this->_size = 1;
}
