#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ScreenIndicatorWorldMarkerComponent.h"
#include "HideHeartIndicatorWithDelay.h"
#include "TerrorRadiusScreenIndicatorComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UTerrorRadiusScreenIndicatorComponent : public UScreenIndicatorWorldMarkerComponent
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FHideHeartIndicatorWithDelay> _hideHeartIndicatorWithDelay;

private:
	UFUNCTION()
	void OnHeartStateChanged(FGameplayTag heartState);

public:
	UTerrorRadiusScreenIndicatorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusScreenIndicatorComponent) { return 0; }
