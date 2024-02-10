#pragma once

#include "CoreMinimal.h"
#include "DBDDangerPredictionComponent.h"
#include "K33TurretDangerPredictionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK33_API UK33TurretDangerPredictionComponent : public UDBDDangerPredictionComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	float MinimumLureDistanceFromKiller;

	UPROPERTY(EditAnywhere)
	float IdealDistanceBehindTurret;

	UPROPERTY(EditAnywhere)
	float MaxPenaltyAtAngle;

public:
	UK33TurretDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDangerPredictionComponent) { return 0; }
