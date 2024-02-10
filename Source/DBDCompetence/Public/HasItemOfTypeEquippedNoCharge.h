#pragma once

#include "CoreMinimal.h"
#include "HasItemOfTypeEquipped.h"
#include "HasItemOfTypeEquippedNoCharge.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasItemOfTypeEquippedNoCharge : public UHasItemOfTypeEquipped
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnItemChargeStateChanged(bool isEmpty);

public:
	UHasItemOfTypeEquippedNoCharge();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeEquippedNoCharge) { return 0; }
