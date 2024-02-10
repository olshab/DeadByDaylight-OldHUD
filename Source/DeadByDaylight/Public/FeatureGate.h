#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FeatureGate.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UFeatureGate : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFeatureGate();
};

FORCEINLINE uint32 GetTypeHash(const UFeatureGate) { return 0; }
