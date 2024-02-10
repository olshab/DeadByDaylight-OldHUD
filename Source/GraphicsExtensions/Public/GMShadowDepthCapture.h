#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GMShadowDepthCapture.generated.h"

class ULightComponent;
class UTextureRenderTarget2D;

UCLASS()
class GRAPHICSEXTENSIONS_API UGMShadowDepthCapture : public UObject
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	ULightComponent* _lightComponent;

	UPROPERTY(Transient)
	UTextureRenderTarget2D* _depthTarget;

public:
	UGMShadowDepthCapture();
};

FORCEINLINE uint32 GetTypeHash(const UGMShadowDepthCapture) { return 0; }
