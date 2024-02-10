#include "HitPlayerAfterRecentDetectionScoreEmitter.h"

UHitPlayerAfterRecentDetectionScoreEmitter::UHitPlayerAfterRecentDetectionScoreEmitter()
{
	this->_timeSinceDetectionDuration = 10.000000;
	this->_trackers = TMap<ADBDPlayer*, float>();
}
