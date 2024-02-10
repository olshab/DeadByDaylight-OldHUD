#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EPlayerRole.h"
#include "ESurvivorFleePathStrategy.h"
#include "DBDDangerPredictionComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDBDDangerPredictionComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	bool ApplyAdditionalCostInDangerArea;

	UPROPERTY(EditAnywhere)
	ESurvivorFleePathStrategy SurvivorFleePathStrategy;

protected:
	UPROPERTY(EditAnywhere)
	float RelevantHorizontalDistance;

	UPROPERTY(EditAnywhere)
	float RelevantVerticalDistance;

	UPROPERTY(EditAnywhere)
	EPlayerRole RelevantRole;

public:
	UDBDDangerPredictionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDDangerPredictionComponent) { return 0; }
