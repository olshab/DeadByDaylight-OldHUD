#pragma once

#include "CoreMinimal.h"
#include "AttackableComponent.h"
#include "K33TurretAttackableComponent.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33TurretAttackableComponent : public UAttackableComponent
{
	GENERATED_BODY()

public:
	UK33TurretAttackableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretAttackableComponent) { return 0; }
