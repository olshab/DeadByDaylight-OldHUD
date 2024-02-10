#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EShadowDepthLODSelection.h"
#include "Components/SceneComponent.h"
#include "GMShadowDepthCaptureComponent.generated.h"

class UTextureRenderTarget2D;
class UGMShadowDepthCapture;
class USpotLightComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class GRAPHICSEXTENSIONS_API UGMShadowDepthCaptureComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 DepthTargetWidth;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 DepthTargetHeight;

	UPROPERTY(VisibleAnywhere, Transient)
	UTextureRenderTarget2D* DepthTarget;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCaptureDynamicPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCaptureStaticPrimitives;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCaptureEveryFrame;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCaptureOnlyIfVisibleFromCamera;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCaptureObjectsWithBlockingCollisionVisibility;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EShadowDepthLODSelection LODSelection;

	UPROPERTY(EditAnywhere)
	float MinPrimitivePixelDiameterBeforeCulling;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector4 ShadowClipRegion;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float OuterConeAngle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float ShadowNearPlaneOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Interp)
	float AttenuationRadius;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool bCastTranslucentShadowsAsOpaque;

	UPROPERTY(EditAnywhere)
	float MaxDrawDistance;

private:
	UPROPERTY(Transient)
	UGMShadowDepthCapture* _shadowDepthCapture;

	UPROPERTY(VisibleAnywhere, Transient, Export)
	USpotLightComponent* _spotLightComponent;

public:
	UFUNCTION(BlueprintCallable)
	void RequestCaptureUpdate();

public:
	UGMShadowDepthCaptureComponent();
};

FORCEINLINE uint32 GetTypeHash(const UGMShadowDepthCaptureComponent) { return 0; }
