#pragma once

#include "CoreMinimal.h"
#include "BaseChainsawAttackOpenSubstate.h"
#include "DBDTunableRowHandle.h"
#include "HillbillyChainsawAttackOpenSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UHillbillyChainsawAttackOpenSubstate : public UBaseChainsawAttackOpenSubstate
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _longDashDuration;

public:
	UHillbillyChainsawAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackOpenSubstate) { return 0; }
