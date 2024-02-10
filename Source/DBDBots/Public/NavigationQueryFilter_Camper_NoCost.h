#pragma once

#include "CoreMinimal.h"
#include "NavigationQueryFilter_Player.h"
#include "NavigationQueryFilter_Camper_NoCost.generated.h"

UCLASS()
class DBDBOTS_API UNavigationQueryFilter_Camper_NoCost : public UNavigationQueryFilter_Player
{
	GENERATED_BODY()

public:
	UNavigationQueryFilter_Camper_NoCost();
};

FORCEINLINE uint32 GetTypeHash(const UNavigationQueryFilter_Camper_NoCost) { return 0; }
