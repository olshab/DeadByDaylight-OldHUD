#include "InnerStrength.h"
#include "EImmobilizedState.h"

float UInnerStrength::GetHideDuration() const
{
	return 0.0f;
}

void UInnerStrength::Authority_OnPlayerImmobilizeStateChanged(const EImmobilizedState oldImmobilizeState, const EImmobilizedState newImmobilizeState)
{

}

UInnerStrength::UInnerStrength()
{
	this->_hideDuration = 0.000000;
}
