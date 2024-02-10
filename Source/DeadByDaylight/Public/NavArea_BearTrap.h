#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_BearTrap.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavArea_BearTrap : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_BearTrap();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_BearTrap) { return 0; }
