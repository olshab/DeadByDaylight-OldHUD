#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECharacterToolItemType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/SoftObjectPtr.h"
#include "ScreenshotPreviewAction.generated.h"

class UTextureRenderTarget2D;
class UScreenshotPreviewWidget;

USTRUCT()
struct FScreenshotPreviewAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool SkyboxEnabled;

	UPROPERTY(EditAnywhere, EditFixedSize)
	TMap<ECharacterToolItemType, FIntPoint> FrameSizes;

	UPROPERTY(EditAnywhere)
	uint16 RenderResolution;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTextureRenderTarget2D> RenderTarget;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UScreenshotPreviewWidget> EditorWidgetClass;

public:
	DEADBYDAYLIGHT_API FScreenshotPreviewAction();
};

FORCEINLINE uint32 GetTypeHash(const FScreenshotPreviewAction) { return 0; }
