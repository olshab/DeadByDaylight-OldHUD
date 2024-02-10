#include "MenuCameraDesignTunables.h"
#include "MenuCameraActor.h"

UMenuCameraDesignTunables::UMenuCameraDesignTunables()
{
	this->CameraClass = AMenuCameraActor::StaticClass();
	this->TransitionCurve = NULL;
	this->Views = TMap<EDBDCameraViewType, FMenuCameraView>();
}
