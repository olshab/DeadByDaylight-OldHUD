#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DLCManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDLCManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UDLCManager();
};

FORCEINLINE uint32 GetTypeHash(const UDLCManager) { return 0; }
