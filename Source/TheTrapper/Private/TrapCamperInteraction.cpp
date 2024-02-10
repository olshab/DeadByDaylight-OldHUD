#include "TrapCamperInteraction.h"

UTrapCamperInteraction::UTrapCamperInteraction()
{
	this->_nonOverridableInteractions = TArray<FString>();
	this->_trapAttachSocket = TEXT("Socket_Trap");
	this->_updateMontageID = TEXT("BearTrapTrapSurvivor");
	this->_updateNoScreamMontageID = TEXT("BearTrapTrapSurvivor_NoScream");
	this->_hemorrhageStatusEffect = NULL;
	this->_mangledStatusEffect = NULL;
	this->_honingStoneWarningStatusEffect = NULL;
}
