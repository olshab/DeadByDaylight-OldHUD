#include "HitPlayerInActiveZoneScoreEmitter.h"

UHitPlayerInActiveZoneScoreEmitter::UHitPlayerInActiveZoneScoreEmitter()
{
	this->_activeZoneLingeringDuration = 10.000000;
	this->_trackers = TMap<AActor*, FActiveZoneOverlapTracker>();
}
