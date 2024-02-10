#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "ModifierValueData.h"
#include "BTDecorator_CompareModifierValues.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_CompareModifierValues : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FModifierValueData ModifierValueData1;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;

	UPROPERTY(EditInstanceOnly)
	FModifierValueData ModifierValueData2;

public:
	UBTDecorator_CompareModifierValues();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_CompareModifierValues) { return 0; }
