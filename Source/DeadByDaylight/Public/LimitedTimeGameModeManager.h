#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LimitedTimeGameModeManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULimitedTimeGameModeManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	ULimitedTimeGameModeManager();
};

FORCEINLINE uint32 GetTypeHash(const ULimitedTimeGameModeManager) { return 0; }
