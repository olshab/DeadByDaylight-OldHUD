#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "PhantomTrapOutlineStrategy.generated.h"

class APhantomTrap;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UPhantomTrapOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TWeakObjectPtr<APhantomTrap> _cachedOwningPhantomTrap;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _colorWhenTeleportationIsAvailable;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _colorAlphaBasedOnDistance;

public:
	UPhantomTrapOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UPhantomTrapOutlineStrategy) { return 0; }
