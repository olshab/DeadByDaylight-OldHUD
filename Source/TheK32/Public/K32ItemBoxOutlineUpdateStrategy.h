#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K32ItemBoxOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32ItemBoxOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _distanceToShowOutline;

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _isOutlineVisibleToSurvivorsWithEmp;

private:
	UFUNCTION()
	void OnDistanceStatValueUpdated(const float distance);

public:
	UK32ItemBoxOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK32ItemBoxOutlineUpdateStrategy) { return 0; }
