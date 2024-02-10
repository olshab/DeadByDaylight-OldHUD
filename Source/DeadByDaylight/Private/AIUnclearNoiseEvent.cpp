#include "AIUnclearNoiseEvent.h"

FAIUnclearNoiseEvent::FAIUnclearNoiseEvent()
{
	this->NoiseLocation = FVector{};
	this->Loudness = 0.0f;
	this->MaxRange = 0.0f;
	this->Instigator = NULL;
	this->Tag = NAME_None;
	this->TeamIdentifier = FGenericTeamId{};
}
