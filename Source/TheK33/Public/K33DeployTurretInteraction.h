#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BasicChargeableInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K33DeployTurretInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK33DeployTurretInteraction : public UBasicChargeableInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _cancelMontage;

	UPROPERTY(EditDefaultsOnly)
	float _cancelDeployDuration;

	UPROPERTY(Replicated)
	FVector _dropOffLocation;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33DeployTurretInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33DeployTurretInteraction) { return 0; }
