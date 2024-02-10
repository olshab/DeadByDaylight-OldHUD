#include "K31DroneActionResponse.h"

FK31DroneActionResponse::FK31DroneActionResponse()
{
	this->Request = FK31DroneActionRequest{};
	this->Timestamp = 0.0f;
	this->Response = EK31DroneActionResponse::AUTHORIZED;
}
