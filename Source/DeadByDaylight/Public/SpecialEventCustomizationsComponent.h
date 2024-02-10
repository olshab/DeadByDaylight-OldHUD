#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SpecialEventCustomizationsComponent.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API USpecialEventCustomizationsComponent : public UObject
{
	GENERATED_BODY()

public:
	USpecialEventCustomizationsComponent();
};

FORCEINLINE uint32 GetTypeHash(const USpecialEventCustomizationsComponent) { return 0; }
