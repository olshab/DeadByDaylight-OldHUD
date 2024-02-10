#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DBDCharacterMovementUtilities.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UDBDCharacterMovementUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UDBDCharacterMovementUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDBDCharacterMovementUtilities) { return 0; }
