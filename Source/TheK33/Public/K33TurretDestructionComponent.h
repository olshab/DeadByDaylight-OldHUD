#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "K33TurretDestructionComponent.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UK33TurretDestructionComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _autoDestroyTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _autoDestroyPauseSurvivorRange;

public:
	UFUNCTION(BlueprintPure)
	float GetTurretDestructionDisappearanceDelay() const;

public:
	UK33TurretDestructionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretDestructionComponent) { return 0; }
