#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Drone.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavArea_Drone : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Drone();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Drone) { return 0; }
