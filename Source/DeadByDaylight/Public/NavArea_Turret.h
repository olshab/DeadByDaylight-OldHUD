#pragma once

#include "CoreMinimal.h"
#include "NavAreas/NavArea.h"
#include "NavArea_Turret.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UNavArea_Turret : public UNavArea
{
	GENERATED_BODY()

public:
	UNavArea_Turret();
};

FORCEINLINE uint32 GetTypeHash(const UNavArea_Turret) { return 0; }
