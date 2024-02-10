#include "K32BaseProjectilePayload.h"

FK32BaseProjectilePayload::FK32BaseProjectilePayload()
{
	this->StartLocationWorldSpace = FVector{};
	this->IsMovingToActor = false;
	this->WorldPositionTarget = FVector{};
	this->TargetActor = NULL;
	this->TargetSocket = NAME_None;
}
