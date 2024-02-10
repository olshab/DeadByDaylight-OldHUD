#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CrossPromotionManager.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UCrossPromotionManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UCrossPromotionManager();
};

FORCEINLINE uint32 GetTypeHash(const UCrossPromotionManager) { return 0; }
