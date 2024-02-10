#pragma once

#include "CoreMinimal.h"
#include "BaseReplicatedState.h"
#include "TunableStat.h"
#include "K33TurretDestroyedState.generated.h"

UCLASS()
class UK33TurretDestroyedState : public UBaseReplicatedState
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _destroyedDuration;

	UPROPERTY(EditDefaultsOnly)
	float _timeBeforeDisappearance;

public:
	UK33TurretDestroyedState();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDestroyedState) { return 0; }
