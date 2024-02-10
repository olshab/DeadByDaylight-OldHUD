#include "TerrorRadiusVisualFeedbackComponent.h"

UTerrorRadiusVisualFeedbackComponent::UTerrorRadiusVisualFeedbackComponent()
{
	this->_heartStateRanges = TArray<FTerrorRadiusVisualIndicatorHeartStateRange>();
	this->_hideHeartStateTags = TArray<FGameplayTag>();
}
