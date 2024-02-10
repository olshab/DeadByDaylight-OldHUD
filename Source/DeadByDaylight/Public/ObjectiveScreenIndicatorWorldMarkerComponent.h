#pragma once

#include "CoreMinimal.h"
#include "ScreenIndicatorWorldMarkerComponent.h"
#include "ObjectiveScreenIndicatorWorldMarkerComponent.generated.h"

class UTexture2D;

UCLASS(meta=(BlueprintSpawnableComponent))
class UObjectiveScreenIndicatorWorldMarkerComponent : public UScreenIndicatorWorldMarkerComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* IndicatorHudScreenIcon;

public:
	UObjectiveScreenIndicatorWorldMarkerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UObjectiveScreenIndicatorWorldMarkerComponent) { return 0; }
