#include "AIDetectedStimulus.h"

FAIDetectedStimulus::FAIDetectedStimulus()
{
	this->Instigator = NULL;
	this->Location = FVector{};
	this->Rotation = FRotator{};
	this->Velocity = FVector{};
	this->LastHasBeenSeenLocation = FVector{};
	this->LastHasBeenSeenDirection = FVector{};
	this->LastHasBeenSeenTime = 0.0f;
	this->NextHasBeenSeenUpdateTime = 0.0f;
	this->AtTime = 0.0f;
	this->Tag = NAME_None;
}
