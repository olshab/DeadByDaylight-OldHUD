#include "Hoarder.h"
#include "EInventoryType.h"

class ACollectable;
class ACamperPlayer;

void UHoarder::OnItemRemovedFromPlayer(ACollectable* item, EInventoryType inventoryType)
{

}

void UHoarder::OnItemAddedToPlayer(ACollectable* item, EInventoryType inventoryType, ACamperPlayer* player)
{

}

float UHoarder::GetBubbleIndicatorLifetime() const
{
	return 0.0f;
}

UHoarder::UHoarder()
{
	this->_chests = TArray<ASearchable*>();
	this->_camperInteractItemPickupRevealRange = 0.000000;
	this->_extraChestsSpawned = 0;
	this->_bubbleIndicatorLifetime = 0.000000;
	this->_showUniqueChestVisualPerState = true;
}
