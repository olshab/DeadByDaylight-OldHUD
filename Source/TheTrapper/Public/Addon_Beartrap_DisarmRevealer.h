#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_Beartrap_DisarmRevealer.generated.h"

class ABearTrap;
class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Beartrap_DisarmRevealer : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	TSubclassOf<UStatusEffect> _timedRevealToKillerStatusEffect;

	UPROPERTY(Transient)
	TMap<ABearTrap*, ACamperPlayer*> _disarmedTrapMap;

public:
	UAddon_Beartrap_DisarmRevealer();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Beartrap_DisarmRevealer) { return 0; }
