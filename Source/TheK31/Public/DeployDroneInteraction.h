#pragma once

#include "CoreMinimal.h"
#include "InteractionDefinition.h"
#include "DeployDroneInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API UDeployDroneInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _shouldDeploymentSetPowerOnCooldown;

	UPROPERTY(EditDefaultsOnly)
	bool _canPlaceDroneWhilePowerIsOnCooldown;

public:
	UDeployDroneInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UDeployDroneInteraction) { return 0; }
