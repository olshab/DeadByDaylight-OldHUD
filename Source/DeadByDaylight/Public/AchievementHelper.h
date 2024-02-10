#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AchievementHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UAchievementHelper : public UObject
{
	GENERATED_BODY()

public:
	UAchievementHelper();
};

FORCEINLINE uint32 GetTypeHash(const UAchievementHelper) { return 0; }
