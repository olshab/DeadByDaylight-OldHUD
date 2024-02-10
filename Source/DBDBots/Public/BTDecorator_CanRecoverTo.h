#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BTDecorator_CanRecoverTo.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_CanRecoverTo : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	float CanRecoverTo;

public:
	UBTDecorator_CanRecoverTo();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CanRecoverTo) { return 0; }
