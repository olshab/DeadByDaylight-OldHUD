#include "GMShadowDepthCaptureComponent.h"

void UGMShadowDepthCaptureComponent::RequestCaptureUpdate()
{

}

UGMShadowDepthCaptureComponent::UGMShadowDepthCaptureComponent()
{
	this->DepthTargetWidth = 128;
	this->DepthTargetHeight = 128;
	this->DepthTarget = NULL;
	this->bCaptureDynamicPrimitives = true;
	this->bCaptureStaticPrimitives = true;
	this->bCaptureEveryFrame = true;
	this->bCaptureOnlyIfVisibleFromCamera = true;
	this->bCaptureObjectsWithBlockingCollisionVisibility = true;
	this->LODSelection = EShadowDepthLODSelection::ViewDependent;
	this->MinPrimitivePixelDiameterBeforeCulling = 5.000000;
	this->OuterConeAngle = 44.000000;
	this->ShadowNearPlaneOffset = 0.100000;
	this->AttenuationRadius = 1000.000000;
	this->bCastTranslucentShadowsAsOpaque = true;
	this->MaxDrawDistance = 3500.000000;
	this->_shadowDepthCapture = NULL;
	this->_spotLightComponent = NULL;
}
