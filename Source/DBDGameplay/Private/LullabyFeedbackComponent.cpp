#include "LullabyFeedbackComponent.h"

class ASlasherPlayer;

void ULullabyFeedbackComponent::OnSlasherSet(ASlasherPlayer* killer)
{

}

ULullabyFeedbackComponent::ULullabyFeedbackComponent()
{
	this->_killersData = TArray<FLullabyKillerData>();
}
