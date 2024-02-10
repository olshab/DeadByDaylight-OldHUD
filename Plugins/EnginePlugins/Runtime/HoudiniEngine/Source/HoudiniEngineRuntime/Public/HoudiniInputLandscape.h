#pragma once

#include "CoreMinimal.h"
#include "HoudiniInputActor.h"
#include "HoudiniInputLandscape.generated.h"

UCLASS()
class HOUDINIENGINERUNTIME_API UHoudiniInputLandscape : public UHoudiniInputActor
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 CachedNumLandscapeComponents;

public:
	UHoudiniInputLandscape();
};

FORCEINLINE uint32 GetTypeHash(const UHoudiniInputLandscape) { return 0; }
