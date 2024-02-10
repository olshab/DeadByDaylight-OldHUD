#pragma once

#include "CoreMinimal.h"
#include "VaultDefinition.h"
#include "StatProperty.h"
#include "KillerVaultDefinition.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UKillerVaultDefinition : public UVaultDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _shouldUseCustomDuration;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty _vaultDuration;

public:
	UKillerVaultDefinition();
};

FORCEINLINE uint32 GetTypeHash(const UKillerVaultDefinition) { return 0; }
