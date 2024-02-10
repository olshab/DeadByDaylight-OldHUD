#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ScreenshotToolPathInfo.h"
#include "ScreenshotPreviewAction.h"
#include "ScreenshotExportAction.h"
#include "Templates/SubclassOf.h"
#include "ScreenshotToolConfigurationAsset.generated.h"

class UObject;

UCLASS()
class UScreenshotToolConfigurationAsset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float SceneSetupDelay;

	UPROPERTY(EditDefaultsOnly)
	bool UpdateCameraFromViewSettings;

	UPROPERTY(EditDefaultsOnly)
	bool AutoSelectActorInEditor;

	UPROPERTY(EditDefaultsOnly)
	bool SaveAndCheckoutAssets;

	UPROPERTY(EditDefaultsOnly)
	FScreenshotToolPathInfo TempIconPathInfo;

	UPROPERTY(EditDefaultsOnly)
	FScreenshotToolPathInfo AssetPathInfo;

	UPROPERTY(EditDefaultsOnly)
	bool ExportAllIconsInOneFrame;

	UPROPERTY(EditDefaultsOnly)
	uint16 IconsExportedPerFrame;

	UPROPERTY(EditDefaultsOnly)
	FScreenshotPreviewAction PreviewAction;

	UPROPERTY(EditDefaultsOnly)
	FScreenshotExportAction ExportAction;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UObject>> HookClasses;

public:
	UScreenshotToolConfigurationAsset();
};

FORCEINLINE uint32 GetTypeHash(const UScreenshotToolConfigurationAsset) { return 0; }
