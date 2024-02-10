#include "NoWayOut.h"

class AEscapeDoor;
class ADBDPlayer;

void UNoWayOut::Multicast_TriggerLoudNoise_Implementation(ADBDPlayer* instigator, AEscapeDoor* escapeDoor)
{

}

float UNoWayOut::GetExitGatePanelBlockDurationPerTokenAtLevel() const
{
	return 0.0f;
}

float UNoWayOut::GetExitGatePanelBlockBaseDurationAtLevel() const
{
	return 0.0f;
}

UNoWayOut::UNoWayOut()
{
	this->_exitGatePanelBlockBaseDuration = 0.000000;
	this->_exitGatePanelBlockDurationPerToken = 0.000000;
	this->_hookedSurvivors = TArray<ACamperPlayer*>();
}
