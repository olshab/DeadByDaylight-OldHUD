#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "StorePurchasingPopupHandler.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UStorePurchasingPopupHandler : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UStorePurchasingPopupHandler();
};

FORCEINLINE uint32 GetTypeHash(const UStorePurchasingPopupHandler) { return 0; }
