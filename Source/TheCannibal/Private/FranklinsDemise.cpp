#include "FranklinsDemise.h"

class ACamperPlayer;
class ACollectable;

void UFranklinsDemise::Multicast_DroppedEvent_Implementation(ACamperPlayer* hitPlayer, ACollectable* itemToDrop)
{

}

float UFranklinsDemise::GetTimeBeforeItemIsConsumedAtLevel() const
{
	return 0.0f;
}

UFranklinsDemise::UFranklinsDemise()
{
	this->_timeBeforeItemIsConsumed = 0.000000;
}
