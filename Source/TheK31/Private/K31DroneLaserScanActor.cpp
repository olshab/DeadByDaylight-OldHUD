#include "K31DroneLaserScanActor.h"
#include "Components/StaticMeshComponent.h"
#include "GMShadowDepthCaptureComponent.h"

class UMaterialInstance;

void AK31DroneLaserScanActor::UpdateLaserScanMeshMaterial(UMaterialInstance* newLaserScanMeshMaterial)
{

}

void AK31DroneLaserScanActor::SetLaserVisibility(bool visible)
{

}

void AK31DroneLaserScanActor::RequestStaticDepthCapturesUpdate()
{

}

void AK31DroneLaserScanActor::InitDroneLaserScan()
{

}

void AK31DroneLaserScanActor::DeactivateDroneLaserScan()
{

}

void AK31DroneLaserScanActor::ActivateDroneLaserScan()
{

}

AK31DroneLaserScanActor::AK31DroneLaserScanActor()
{
	this->LaserScanMeshMaterial = NULL;
	this->LaserScanMeshMaterialUndetectable = NULL;
	this->StaticCapturesLightAngle = 45.000000;
	this->DynamicCapturesLightAngle = 15.000000;
	this->DepthCaptureNearPlaneOffset = 30.000000;
	this->FrontLaserScanSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("FrontLaserScanMesh"));
	this->BackLaserScanSM = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SecondLaserScanMesh"));
	this->FrontDepthCaptureComponentDynamic = CreateDefaultSubobject<UGMShadowDepthCaptureComponent>(TEXT("FrontDepthCaptureComponentDynamic"));
	this->BackDepthCaptureComponentDynamic = CreateDefaultSubobject<UGMShadowDepthCaptureComponent>(TEXT("BackDepthCaptureComponentDynamic"));
	this->XDepthCaptureComponentStatic = CreateDefaultSubobject<UGMShadowDepthCaptureComponent>(TEXT("XDepthCaptureComponentStatic"));
	this->YDepthCaptureComponentStatic = CreateDefaultSubobject<UGMShadowDepthCaptureComponent>(TEXT("YDepthCaptureComponentStatic"));
	this->NegXDepthCaptureComponentStatic = CreateDefaultSubobject<UGMShadowDepthCaptureComponent>(TEXT("NegXDepthCaptureComponentStatic"));
	this->NegYDepthCaptureComponentStatic = CreateDefaultSubobject<UGMShadowDepthCaptureComponent>(TEXT("NegYDepthCaptureComponentStatic"));
	this->_defaultLaserScanMeshMaterial = NULL;
}
