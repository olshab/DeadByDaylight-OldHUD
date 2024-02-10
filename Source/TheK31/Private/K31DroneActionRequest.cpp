#include "K31DroneActionRequest.h"

FK31DroneActionRequest::FK31DroneActionRequest()
{
	this->Action = NULL;
	this->Drone = NULL;
	this->PredictionKey = FActionPredictionKey{};
}
