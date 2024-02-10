#pragma once

#include "CoreMinimal.h"
#include "HasItemOfTypeInInventory.h"
#include "HasItemOfTypeInInventoryNoCharge.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHasItemOfTypeInInventoryNoCharge : public UHasItemOfTypeInInventory
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnItemChargeStateChanged(bool isEmpty);

public:
	UHasItemOfTypeInInventoryNoCharge();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeInInventoryNoCharge) { return 0; }
