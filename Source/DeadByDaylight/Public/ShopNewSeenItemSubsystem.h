#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ShopNewSeenItemSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UShopNewSeenItemSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UShopNewSeenItemSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UShopNewSeenItemSubsystem) { return 0; }
