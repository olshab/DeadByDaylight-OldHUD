#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "TerrorRadiusVisualIndicatorHeartStateRange.h"
#include "TerrorRadiusVisualFeedbackComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTerrorRadiusVisualFeedbackComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeartStateChanged, FGameplayTag, heartState);

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeartBeat, float, bpmIntensityPercentage);

public:
	UPROPERTY(BlueprintAssignable)
	FOnHeartStateChanged OnHeartStateChanged;

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FTerrorRadiusVisualIndicatorHeartStateRange> _heartStateRanges;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _hideHeartStateTags;

private:
	UPROPERTY(BlueprintAssignable)
	FOnHeartBeat OnHeartBeat;

public:
	UTerrorRadiusVisualFeedbackComponent();
};

FORCEINLINE uint32 GetTypeHash(const UTerrorRadiusVisualFeedbackComponent) { return 0; }
