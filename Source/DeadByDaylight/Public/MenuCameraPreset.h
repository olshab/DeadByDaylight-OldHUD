#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EDBDCameraViewType.h"
#include "MenuCameraView.h"
#include "MenuCameraViewTargetWithLabel.h"
#include "MenuCameraPreset.generated.h"

USTRUCT()
struct FMenuCameraPreset: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TMap<EDBDCameraViewType, FMenuCameraView> Views;

	UPROPERTY(EditAnywhere)
	TArray<FMenuCameraViewTargetWithLabel> Targets;

public:
	DEADBYDAYLIGHT_API FMenuCameraPreset();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraPreset) { return 0; }
