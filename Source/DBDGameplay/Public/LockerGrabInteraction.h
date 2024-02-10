#pragma once

#include "CoreMinimal.h"
#include "SearchLockerInteraction.h"
#include "Templates/SubclassOf.h"
#include "LockerGrabInteraction.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class ULockerGrabInteraction : public USearchLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _lockerGrabBlindImmunity;

	UPROPERTY(Transient)
	ACamperPlayer* _survivorInLocker;

public:
	ULockerGrabInteraction();
};

FORCEINLINE uint32 GetTypeHash(const ULockerGrabInteraction) { return 0; }
