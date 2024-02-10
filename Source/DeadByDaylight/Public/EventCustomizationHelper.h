#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EventCustomizationHelper.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UEventCustomizationHelper : public UObject
{
	GENERATED_BODY()

public:
	UEventCustomizationHelper();
};

FORCEINLINE uint32 GetTypeHash(const UEventCustomizationHelper) { return 0; }
