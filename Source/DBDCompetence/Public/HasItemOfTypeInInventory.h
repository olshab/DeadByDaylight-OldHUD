#pragma once

#include "CoreMinimal.h"
#include "HasItemOfTypeEquipped.h"
#include "HasItemOfTypeInInventory.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UHasItemOfTypeInInventory : public UHasItemOfTypeEquipped
{
	GENERATED_BODY()

public:
	UHasItemOfTypeInInventory();
};

FORCEINLINE uint32 GetTypeHash(const UHasItemOfTypeInInventory) { return 0; }
