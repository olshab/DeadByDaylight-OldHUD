#pragma once

#include "CoreMinimal.h"
#include "KillerVaultDefinition.h"
#include "FrenzySlasherVault.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THELEGION_API UFrenzySlasherVault : public UKillerVaultDefinition
{
	GENERATED_BODY()

public:
	UFrenzySlasherVault();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzySlasherVault) { return 0; }
