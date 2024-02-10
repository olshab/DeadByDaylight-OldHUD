#include "TOPWorkResultObject.h"

FTOPWorkResultObject::FTOPWorkResultObject()
{
	this->Name = TEXT("");
	this->FilePath = TEXT("");
	this->State = EPDGWorkResultState::None;
	this->WorkItemResultInfoIndex = 0;
	this->ResultOutputs = TArray<UHoudiniOutput*>();
	this->bAutoBakedSinceLastLoad = false;
	this->OutputActorOwner = FOutputActorOwner{};
}
