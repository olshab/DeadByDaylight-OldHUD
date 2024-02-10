#pragma once

#include "CoreMinimal.h"
#include "EventDrivenModifierCondition.h"
#include "HasActivePhantomTrap.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasActivePhantomTrap : public UEventDrivenModifierCondition
{
	GENERATED_BODY()

public:
	UHasActivePhantomTrap();
};

FORCEINLINE uint32 GetTypeHash(const UHasActivePhantomTrap) { return 0; }
