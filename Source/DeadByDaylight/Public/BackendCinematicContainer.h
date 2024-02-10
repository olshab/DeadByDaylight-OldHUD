#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BackendCinematicContainer.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBackendCinematicContainer : public UObject
{
	GENERATED_BODY()

public:
	UBackendCinematicContainer();
};

FORCEINLINE uint32 GetTypeHash(const UBackendCinematicContainer) { return 0; }
