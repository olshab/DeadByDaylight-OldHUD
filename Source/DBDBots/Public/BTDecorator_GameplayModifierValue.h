#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "BTDecorator_TickableBase.h"
#include "ModifierValueData.h"
#include "BTDecorator_GameplayModifierValue.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_GameplayModifierValue : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> ArithmeticOperation;

	UPROPERTY(EditInstanceOnly)
	FModifierValueData ModifierValueData;

	UPROPERTY(EditInstanceOnly)
	float CompareToValue;

public:
	UBTDecorator_GameplayModifierValue();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_GameplayModifierValue) { return 0; }
