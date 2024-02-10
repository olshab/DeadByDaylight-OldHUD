#include "MovementModeNearActor.h"

FMovementModeNearActor::FMovementModeNearActor()
{
	this->NearActorMovementMode = ECharacterMovementTypes::Normal;
	this->NearActorClass = NULL;
	this->NearDistanceSquared = FAITunableParameter{};
	this->SeeActorRoll = FAIRoll{};
	this->ApplyToPlayerRoles = TArray<EPlayerRole>();
}
