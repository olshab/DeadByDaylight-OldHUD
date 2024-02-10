#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "SteamPipeResetSwitchInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USteamPipeResetSwitchInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	USteamPipeResetSwitchInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USteamPipeResetSwitchInteraction) { return 0; }
