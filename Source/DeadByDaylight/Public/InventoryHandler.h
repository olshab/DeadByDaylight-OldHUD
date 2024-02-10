#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InventoryHandler.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UInventoryHandler : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UInventoryHandler();
};

FORCEINLINE uint32 GetTypeHash(const UInventoryHandler) { return 0; }
