#pragma once

#include "CoreMinimal.h"
#include "EPawnInputPressTypes.h"
#include "BTService_OnRelevantBase.h"
#include "BTService_InputAtTiming.generated.h"

UCLASS()
class DBDBOTS_API UBTService_InputAtTiming : public UBTService_OnRelevantBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	EPawnInputPressTypes InputType;

public:
	UBTService_InputAtTiming();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_InputAtTiming) { return 0; }
