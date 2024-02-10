#pragma once

#include "CoreMinimal.h"
#include "ChargeableInteractionDefinition.h"
#include "Halloween2023TeleporterInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHalloween2023TeleporterInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

public:
	UHalloween2023TeleporterInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UHalloween2023TeleporterInteraction) { return 0; }
