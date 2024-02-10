#include "K31WeakPointScoreEmitter.h"

class UChargeableComponent;

void UK31WeakPointScoreEmitter::Authority_OnLevelReadyToPlay()
{

}

void UK31WeakPointScoreEmitter::Authority_OnDechargeEnd(UChargeableComponent* chargeableComponent)
{

}

void UK31WeakPointScoreEmitter::Authority_OnDechargeBegin(UChargeableComponent* chargeableComponent)
{

}

UK31WeakPointScoreEmitter::UK31WeakPointScoreEmitter()
{
	this->_registeredSurvivors = TMap<ACamperPlayer*, FSurvivorWeakPointScoreDatum>();
}
