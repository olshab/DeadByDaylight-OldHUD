#pragma once

#include "CoreMinimal.h"
#include "AttackableComponent.h"
#include "K33ControlStationAttackableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33ControlStationAttackableComponent : public UAttackableComponent
{
	GENERATED_BODY()

public:
	UK33ControlStationAttackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33ControlStationAttackableComponent) { return 0; }
