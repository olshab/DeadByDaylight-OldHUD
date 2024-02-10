#include "UnbrokenPalletsRestrictedPlacementAreaStrategy.h"

UUnbrokenPalletsRestrictedPlacementAreaStrategy::UUnbrokenPalletsRestrictedPlacementAreaStrategy()
{
	this->_unbrokenPallets = TArray<APallet*>();
	this->_palletCollisionBoxWhenDroppedTagName = TEXT("PalletZoneForRestrictedPlacement");
}
