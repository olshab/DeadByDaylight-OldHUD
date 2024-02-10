#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AITunableParameter.h"
#include "AIEnemyTargetPrediction.generated.h"

UCLASS(DefaultToInstanced, EditInlineNew)
class UAIEnemyTargetPrediction : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FAITunableParameter DistanceToTargetScore;

	UPROPERTY(EditAnywhere)
	FAITunableParameter SpeedToTargetScore;

	UPROPERTY(EditAnywhere)
	FAITunableParameter PredictedTargetValidTime;

public:
	UAIEnemyTargetPrediction();
};

FORCEINLINE uint32 GetTypeHash(const UAIEnemyTargetPrediction) { return 0; }
