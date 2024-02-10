#pragma once

#include "CoreMinimal.h"
#include "PlayerScoreEmitter.h"
#include "GameplayTagContainer.h"
#include "HitPlayerAfterRecentDetectionScoreEmitter.generated.h"

class ADBDPlayer;

UCLASS()
class THEK31_API UHitPlayerAfterRecentDetectionScoreEmitter : public UPlayerScoreEmitter
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _timeSinceDetectionDuration;

	UPROPERTY(EditAnywhere)
	FGameplayTag _scoreEvent;

	UPROPERTY(Transient)
	TMap<ADBDPlayer*, float> _trackers;

public:
	UHitPlayerAfterRecentDetectionScoreEmitter();
};

FORCEINLINE uint32 GetTypeHash(const UHitPlayerAfterRecentDetectionScoreEmitter) { return 0; }
