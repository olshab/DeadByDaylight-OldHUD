#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "StatusEffectInfo.h"
#include "ImposeStatusEffectOnEventAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UImposeStatusEffectOnEventAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	bool _requireEventInstigatorToMatchAddonOwnerToImposeStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	bool _requireEventTargetToMatchAddonOwnerToImposeStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectInfo> _statusEffects;

public:
	UImposeStatusEffectOnEventAddon();
};

FORCEINLINE uint32 GetTypeHash(const UImposeStatusEffectOnEventAddon) { return 0; }
