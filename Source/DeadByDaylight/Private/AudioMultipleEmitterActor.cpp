#include "AudioMultipleEmitterActor.h"
#include "AudioMultipleEmitterComponent.h"

AAudioMultipleEmitterActor::AAudioMultipleEmitterActor()
{
	this->AudioMultiEmitter = CreateDefaultSubobject<UAudioMultipleEmitterComponent>(TEXT("AudioMultiEmitter"));
	this->EmitterActors = TArray<AActor*>();
}
