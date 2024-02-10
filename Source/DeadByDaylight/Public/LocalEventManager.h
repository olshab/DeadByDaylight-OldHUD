#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LocalEventManager.generated.h"

UCLASS()
class ULocalEventManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	ULocalEventManager();
};

FORCEINLINE uint32 GetTypeHash(const ULocalEventManager) { return 0; }
