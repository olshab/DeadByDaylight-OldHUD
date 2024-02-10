#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_CompareInteractorCharge.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_CompareInteractorCharge : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> ChargePercentQuery;

	UPROPERTY(EditInstanceOnly)
	float ChargePercentValue;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBInteractorObj;

public:
	UBTDecorator_CompareInteractorCharge();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CompareInteractorCharge) { return 0; }
