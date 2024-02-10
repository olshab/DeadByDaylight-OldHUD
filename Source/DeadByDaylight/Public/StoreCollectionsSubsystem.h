#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StoreCollectionsSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStoreCollectionsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UStoreCollectionsSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UStoreCollectionsSubsystem) { return 0; }
