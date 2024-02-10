#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MenuCameraViewSettings.h"
#include "MenuCameraView.generated.h"

USTRUCT(BlueprintType)
struct FMenuCameraView
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector Location;

	UPROPERTY(EditAnywhere)
	FRotator Rotation;

	UPROPERTY(EditAnywhere)
	bool Override_Settings;

	UPROPERTY(EditAnywhere)
	FMenuCameraViewSettings Settings;

public:
	DEADBYDAYLIGHT_API FMenuCameraView();
};

FORCEINLINE uint32 GetTypeHash(const FMenuCameraView) { return 0; }
