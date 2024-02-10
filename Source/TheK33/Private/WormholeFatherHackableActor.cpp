#include "WormholeFatherHackableActor.h"
#include "GameplayTagContainer.h"
#include "WormholeFatherHackingComponent.h"
#include "GameEventData.h"

void AWormholeFatherHackableActor::OnHackedEvent_Implementation(const FGameplayTag gameEvent, const FGameEventData& gameEventData)
{

}

AWormholeFatherHackableActor::AWormholeFatherHackableActor()
{
	this->_hackingComponent = CreateDefaultSubobject<UWormholeFatherHackingComponent>(TEXT("HackedActorComponent"));
}
