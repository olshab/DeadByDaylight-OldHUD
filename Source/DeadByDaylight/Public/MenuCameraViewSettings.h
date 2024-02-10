#pragma once

#include "CoreMinimal.h"
#include "MenuCameraViewSettings.generated.h"

USTRUCT(BlueprintType)
struct FMenuCameraViewSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float FieldOfView;

	UPROPERTY(EditAnywhere)
	float AspectRatio;

	UPROPERTY(EditAnywhere)
	bool ConstrainAspectRatio;

	UPROPERTY(EditAnywhere)
	bool UseFieldOfViewForLOD;

public:
	DEADBYDAYLIGHT_API FMenuCameraViewSettings();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraViewSettings) { return 0; }
