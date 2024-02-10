#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "ECharacterMovementTypes.h"
#include "BTService_SetMovementConversion.generated.h"

UCLASS()
class DBDBOTS_API UBTService_SetMovementConversion : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes FromMovementMode;

	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes ToMovementMode;

	UPROPERTY(EditInstanceOnly)
	uint8 ApplyOrder;

public:
	UBTService_SetMovementConversion();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_SetMovementConversion) { return 0; }
