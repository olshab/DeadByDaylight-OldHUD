#include "TerrorRadiusScreenIndicatorComponent.h"
#include "GameplayTagContainer.h"

void UTerrorRadiusScreenIndicatorComponent::OnHeartStateChanged(FGameplayTag heartState)
{

}

UTerrorRadiusScreenIndicatorComponent::UTerrorRadiusScreenIndicatorComponent()
{
	this->_hideHeartIndicatorWithDelay = TArray<FHideHeartIndicatorWithDelay>();
}
