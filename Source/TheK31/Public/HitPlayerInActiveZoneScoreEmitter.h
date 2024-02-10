#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "GameplayTagContainer.h"
#include "ActiveZoneOverlapTracker.h"
#include "HitPlayerInActiveZoneScoreEmitter.generated.h"

class AActor;

UCLASS()
class THEK31_API UHitPlayerInActiveZoneScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _activeZoneLingeringDuration;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreEvent;

	UPROPERTY(Transient)
	TMap<AActor*, FActiveZoneOverlapTracker> _trackers;

public:
	UHitPlayerInActiveZoneScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UHitPlayerInActiveZoneScoreEmitter) { return 0; }
