#include "Winter2023EventComponent.h"
#include "AuthoritativeActorPoolComponent.h"

void UWinter2023EventComponent::DBD_Winter2023SetMaxMrMarchAndPercentChance(int32 maxMrMarch, float percentChance)
{

}

void UWinter2023EventComponent::DBD_Winter2023ForceRespawnSnowmen()
{

}

UWinter2023EventComponent::UWinter2023EventComponent()
{
	this->_mrMarchPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("MrMarchPool"));
	this->_snowmanActorPool = CreateDefaultSubobject<UAuthoritativeActorPoolComponent>(TEXT("SnowmanActorPool"));
}
