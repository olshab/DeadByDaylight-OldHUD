#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K32EmpScoreComponent.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK32EmpScoreComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minPodsRemovedForManyPodsRemovedScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minUnhookedSurvivorAssimilationsRemovedForManyCleansedScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minHookedSurvivorAssimilationsRemovedForManyCleansedScoreEvent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _basePodRemovalScoreValue;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _podRemovedScoreEventDepreciationCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _unhookedSurvivorsCleansedScoreEventDepreciationCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _hookedSurvivorsCleansedScoreEventDepreciationCurve;

public:
	UK32EmpScoreComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK32EmpScoreComponent) { return 0; }
