#pragma once

#include "CoreMinimal.h"
#include "AIEnemyTracker.h"
#include "AIEnemyTracker_Killer.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UAIEnemyTracker_Killer : public UAIEnemyTracker
{
	GENERATED_BODY()

public:
	UAIEnemyTracker_Killer();
};

FORCEINLINE uint32 GetTypeHash(const UAIEnemyTracker_Killer) { return 0; }
