#pragma once

#include "CoreMinimal.h"
#include "BasicChargeableInteraction.h"
#include "K33TurretRepairInteraction.generated.h"

class AActor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33TurretRepairInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void Authority_OnChargeApplied(float individualChargeAmount, float totalChargeAmount, AActor* chargeInstigator, bool wasCoop, float deltaTime);

public:
	UK33TurretRepairInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33TurretRepairInteraction) { return 0; }
