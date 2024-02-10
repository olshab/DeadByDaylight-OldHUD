#include "HideHeartIndicatorWithDelay.h"

FHideHeartIndicatorWithDelay::FHideHeartIndicatorWithDelay()
{
	this->HideTag = FGameplayTag{};
	this->DelayWhenTagRemoved = 0.0f;
}
