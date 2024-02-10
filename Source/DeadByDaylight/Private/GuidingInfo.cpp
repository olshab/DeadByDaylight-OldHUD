#include "GuidingInfo.h"

FGuidingInfo::FGuidingInfo()
{
	this->_guidingPlayers = TArray<ADBDPlayer*>();
	this->_guidedState = EGuidedState::VE_None;
}
