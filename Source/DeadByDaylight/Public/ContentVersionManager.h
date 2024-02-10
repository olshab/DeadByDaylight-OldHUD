#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ContentVersionManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UContentVersionManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UContentVersionManager();
};

FORCEINLINE uint32 GetTypeHash(const UContentVersionManager) { return 0; }
