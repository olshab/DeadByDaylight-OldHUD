#include "OnScreenDebugInfo.h"

FOnScreenDebugInfo::FOnScreenDebugInfo()
{
	this->Message = TEXT("");
	this->Color = FColor{};
	this->Key = 0;
	this->TimeToDisplay = 0.0f;
	this->IsDrawDebug = false;
	this->DrawDebugLocation = FVector{};
}
