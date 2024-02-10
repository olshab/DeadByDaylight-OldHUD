#include "BloodlustExposeInteraction.h"

class ADBDPlayer;
class ACamperPlayer;

void UBloodlustExposeInteraction::Multicast_BloodlustExpose_Implementation(ADBDPlayer* player, ACamperPlayer* target)
{

}

UBloodlustExposeInteraction::UBloodlustExposeInteraction()
{
	this->_effectToApply = NULL;
	this->_camper = NULL;
}
