#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "AnimationMontageDescriptor.h"
#include "Addon_Hillbilly_15.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_Hillbilly_15 : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _breakPalletMontage;

	UPROPERTY(EditDefaultsOnly)
	float _halfDamageDurationAfterBreakable;

public:
	UAddon_Hillbilly_15();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Hillbilly_15) { return 0; }
