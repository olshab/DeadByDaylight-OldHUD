#include "TeleportToDemogorgonPortalInteraction.h"

class ASlasherPlayer;

void UTeleportToDemogorgonPortalInteraction::OnSlasherSet(ASlasherPlayer* killer)
{

}

void UTeleportToDemogorgonPortalInteraction::OnLocallyObservedChanged(const bool isKillerLocallyObserved)
{

}

UTeleportToDemogorgonPortalInteraction::UTeleportToDemogorgonPortalInteraction()
{
	this->_teleportToPortalSoundRange = 1600.000000;
	this->_inputReleaseChargePercentAllowance = 0.980000;
	this->_enterPortalPhaseDuration = 0.000000;
	this->_cancelTeleportingPhaseDuration = 0.100000;
	this->_redMossStatusEffectClass = NULL;
	this->_portalTargetingComponent = NULL;
	this->_portalPlacerState = NULL;
	this->_startingPortal = NULL;
	this->_targetedPortal = NULL;
	this->_interactingPlayer = NULL;
}
