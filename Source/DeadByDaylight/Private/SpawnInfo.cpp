#include "SpawnInfo.h"

FSpawnInfo::FSpawnInfo()
{
	this->ActorClass = NULL;
	this->Transform = FTransform{};
	this->AttachSocket = NAME_None;
	this->AttachParentName = TEXT("");
	this->AttachParentClass = NULL;
}
