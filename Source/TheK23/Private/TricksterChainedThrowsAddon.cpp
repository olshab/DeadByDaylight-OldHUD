#include "TricksterChainedThrowsAddon.h"
#include "Net/UnrealNetwork.h"

void UTricksterChainedThrowsAddon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTricksterChainedThrowsAddon, _consecutiveHits);
}

UTricksterChainedThrowsAddon::UTricksterChainedThrowsAddon()
{
	this->_consecutiveHits = 0;
	this->_resetOnEnteringFlurryInteraction = false;
}
