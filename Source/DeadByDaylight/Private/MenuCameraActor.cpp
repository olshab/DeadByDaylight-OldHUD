#include "MenuCameraActor.h"
#include "EDBDCameraViewType.h"
#include "MenuCameraView.h"

bool AMenuCameraActor::TransitionInProgress() const
{
	return false;
}

FMenuCameraView AMenuCameraActor::GetTransitionTargetView() const
{
	return FMenuCameraView{};
}

FMenuCameraView AMenuCameraActor::GetTransitionInitView() const
{
	return FMenuCameraView{};
}

EDBDCameraViewType AMenuCameraActor::GetActiveView() const
{
	return EDBDCameraViewType::None;
}

bool AMenuCameraActor::CanTransition()
{
	return false;
}

AMenuCameraActor::AMenuCameraActor()
{

}
