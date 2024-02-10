#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AITunableParameter.h"
#include "AITrackedEnemyData.h"
#include "DBDAIEnemyTrackerComponent.generated.h"

class UAIEnemyTracker;
class UAIEnemyTargetPrediction;
class ACharacter;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIEnemyTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Export)
	UAIEnemyTracker* EnemyTracker;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Export)
	UAIEnemyTargetPrediction* EnemyTargetPrediction;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float DataUpdateInterval;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float TargetPredictionUpdateInterval;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FAITunableParameter PotentialTargetedLocationRange;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float BaseKnownInfoExpirationTime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	float DistanceInfoExpirationTime;

private:
	UPROPERTY(Transient)
	TMap<TWeakObjectPtr<ACharacter>, FAITrackedEnemyData> _trackedEnemiesData;

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

public:
	UDBDAIEnemyTrackerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIEnemyTrackerComponent) { return 0; }
