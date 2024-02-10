#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UObject/NoExportTypes.h"
#include "EHudScreenIndicatorType.h"
#include "ScreenIndicatorWorldMarkerComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UScreenIndicatorWorldMarkerComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EHudScreenIndicatorType HudScreenIndicatorType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FFloatRange VisibleDistanceRange;

public:
	UScreenIndicatorWorldMarkerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UScreenIndicatorWorldMarkerComponent) { return 0; }
