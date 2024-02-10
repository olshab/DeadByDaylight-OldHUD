#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ProceduralGenerationUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UProceduralGenerationUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UProceduralGenerationUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UProceduralGenerationUtilities) { return 0; }
