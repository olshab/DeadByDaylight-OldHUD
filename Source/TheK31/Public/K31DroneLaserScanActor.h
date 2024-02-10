#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PerPlatformProperties.h"
#include "K31DroneLaserScanActor.generated.h"

class UMaterialInstance;
class UStaticMeshComponent;
class UGMShadowDepthCaptureComponent;

UCLASS()
class THEK31_API AK31DroneLaserScanActor : public AActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* LaserScanMeshMaterial;

	UPROPERTY(EditDefaultsOnly)
	UMaterialInstance* LaserScanMeshMaterialUndetectable;

	UPROPERTY(EditDefaultsOnly)
	float StaticCapturesLightAngle;

	UPROPERTY(EditDefaultsOnly)
	float DynamicCapturesLightAngle;

	UPROPERTY(EditDefaultsOnly)
	float DepthCaptureNearPlaneOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStaticMeshComponent* FrontLaserScanSM;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Export)
	UStaticMeshComponent* BackLaserScanSM;

	UPROPERTY(EditAnywhere, Export)
	UGMShadowDepthCaptureComponent* FrontDepthCaptureComponentDynamic;

	UPROPERTY(EditAnywhere, Export)
	UGMShadowDepthCaptureComponent* BackDepthCaptureComponentDynamic;

	UPROPERTY(EditAnywhere, Export)
	UGMShadowDepthCaptureComponent* XDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere, Export)
	UGMShadowDepthCaptureComponent* YDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere, Export)
	UGMShadowDepthCaptureComponent* NegXDepthCaptureComponentStatic;

	UPROPERTY(EditAnywhere, Export)
	UGMShadowDepthCaptureComponent* NegYDepthCaptureComponentStatic;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt DynamicDepthCaptureSizeWidth;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt DynamicDepthCaptureSizeHeight;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt StaticDepthCaptureSizeWidth;

	UPROPERTY(EditDefaultsOnly)
	FPerPlatformInt StaticDepthCaptureSizeHeight;

private:
	UPROPERTY(Transient)
	UMaterialInstance* _defaultLaserScanMeshMaterial;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateLaserScanMeshMaterial(UMaterialInstance* newLaserScanMeshMaterial);

	UFUNCTION(BlueprintCallable)
	void SetLaserVisibility(bool visible);

	UFUNCTION(BlueprintCallable)
	void RequestStaticDepthCapturesUpdate();

	UFUNCTION(BlueprintCallable)
	void InitDroneLaserScan();

	UFUNCTION(BlueprintCallable)
	void DeactivateDroneLaserScan();

	UFUNCTION(BlueprintCallable)
	void ActivateDroneLaserScan();

public:
	AK31DroneLaserScanActor();
};

FORCEINLINE uint32 GetTypeHash(const AK31DroneLaserScanActor) { return 0; }
