#include "InstallBrandNewPartInteraction.h"

class ADBDPlayer;

void UInstallBrandNewPartInteraction::Multicast_OnTriggerSkillCheck_Implementation(ADBDPlayer* player)
{

}

UInstallBrandNewPartInteraction::UInstallBrandNewPartInteraction()
{
	this->_toolbox = NULL;
	this->_permanentProgressPercent = 0.110000;
	this->_existingSkillCheckDelay = 0.250000;
	this->_repairToolboxText = FText::GetEmpty();
}
