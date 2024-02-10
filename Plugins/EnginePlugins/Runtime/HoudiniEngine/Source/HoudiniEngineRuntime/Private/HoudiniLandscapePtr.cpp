#include "HoudiniLandscapePtr.h"

UHoudiniLandscapePtr::UHoudiniLandscapePtr()
{
	this->LandscapeSoftPtr = NULL;
	this->BakeType = EHoudiniLandscapeOutputBakeType::Detachment;
	this->EditLayerName = NAME_None;
}
