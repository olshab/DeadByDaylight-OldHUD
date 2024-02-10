#include "AkRoomComponent.h"

class UAkAcousticTextureSetComponent;
class UPrimitiveComponent;

void UAkRoomComponent::SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent)
{

}

UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent() const
{
	return NULL;
}

UAkRoomComponent::UAkRoomComponent()
{
	this->bEnable = true;
	this->bDynamic = false;
	this->Priority = 0.000000;
	this->WallOcclusion = 1.000000;
	this->AuxSendLevel = 0.000000;
	this->AutoPost = false;
	this->GeometryComponent = NULL;
}
