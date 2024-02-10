#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StoreSpecialPackSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStoreSpecialPackSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UStoreSpecialPackSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialPackSubsystem) { return 0; }
