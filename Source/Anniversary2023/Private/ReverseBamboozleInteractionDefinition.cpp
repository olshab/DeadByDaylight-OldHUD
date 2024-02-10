#include "ReverseBamboozleInteractionDefinition.h"

class ADBDPlayer;
class AWindow;

void UReverseBamboozleInteractionDefinition::Multicast_OnWindowBlockBegin_Implementation(ADBDPlayer* abilityCaster, AWindow* window)
{

}

UReverseBamboozleInteractionDefinition::UReverseBamboozleInteractionDefinition()
{
	this->_windowBlockSelfFeedbackClasses = TArray<TSubclassOf<ABlockFeedbackBase>>();
	this->_windowBlockOtherFeedbackClasses = TArray<TSubclassOf<ABlockFeedbackBase>>();
	this->_authorityWindow = NULL;
}
