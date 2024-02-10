#include "LocalActorPoolComponent.h"

ULocalActorPoolComponent::ULocalActorPoolComponent()
{
	this->_pool = TArray<AActor*>();
}
