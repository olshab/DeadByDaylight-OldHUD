#include "GlassBeadMapAddon.h"

class ADBDPlayer;
class UInteractionDefinition;

void UGlassBeadMapAddon::Authority_OnSecondaryInputPressed(ADBDPlayer* player, UInteractionDefinition* interaction, bool fromCancelRequest)
{

}

UGlassBeadMapAddon::UGlassBeadMapAddon()
{
	this->_spawningCooldownTimer = 0.500000;
	this->_mapMarkerBPClass = NULL;
	this->_currentMapMarker = NULL;
}
