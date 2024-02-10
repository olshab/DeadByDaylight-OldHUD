#include "BTService_StimuliMonitor.h"

UBTService_StimuliMonitor::UBTService_StimuliMonitor()
{
	this->StimulusWasInSightDuration = 8.000000;
	this->ExtrapolateLoseSightDuration = 2.000000;
	this->SeenFriendlyStimuliExpiryInSeconds = 5.000000;
	this->ForcedStimulusInSightDistance = 0.000000;
	this->_seenFriendlyStimuli = TMap<AActor*, float>();
}
