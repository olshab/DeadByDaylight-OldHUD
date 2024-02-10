#include "PlayerPerspectiveChangeComponent.h"
#include "PlayerPerspectiveChangeTargetData.h"

void UPlayerPerspectiveChangeComponent::TransitionToTargetPerspective(FPlayerPerspectiveChangeTargetData targetData, float transitionDuration)
{

}

void UPlayerPerspectiveChangeComponent::FinalizeTargetPerspective()
{

}

UPlayerPerspectiveChangeComponent::UPlayerPerspectiveChangeComponent()
{
	this->_shouldUpdateFirstPersonMeshAndModelAfterFinalize = true;
}
