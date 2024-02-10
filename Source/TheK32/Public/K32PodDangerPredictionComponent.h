#pragma once

#include "CoreMinimal.h"
#include "DBDDangerPredictionComponent.h"
#include "K32PodDangerPredictionComponent.generated.h"

class AK32KillerPod;
class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK32_API UK32PodDangerPredictionComponent : public UDBDDangerPredictionComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _podMaxRange;

	UPROPERTY(EditAnywhere)
	float _podRangeMargin;

	UPROPERTY(EditAnywhere)
	float _dangerAreaCostMultiplierForIdlePod;

	UPROPERTY(EditAnywhere)
	float _dangerAreaCostMultiplierForActivePod;

	UPROPERTY(EditAnywhere)
	float _activePodWeightPenalty;

	UPROPERTY(EditAnywhere)
	float _idlePodWeightPenalty;

	UPROPERTY(Transient)
	AK32KillerPod* _pod;

	UPROPERTY(Transient)
	TArray<AActor*> _allInGamePlayers;

public:
	UK32PodDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32PodDangerPredictionComponent) { return 0; }
