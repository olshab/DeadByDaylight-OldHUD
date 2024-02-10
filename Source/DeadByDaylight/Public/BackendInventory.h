#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "BackendInventory.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UBackendInventory : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UBackendInventory();
};

FORCEINLINE uint32 GetTypeHash(const UBackendInventory) { return 0; }
