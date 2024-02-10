#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "DataTableDropdown.h"
#include "AIHasPerkCondition.generated.h"

USTRUCT()
struct FAIHasPerkCondition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FDataTableDropdown PerkID;

	UPROPERTY(EditInstanceOnly)
	bool CompareDisplayPercent;

	UPROPERTY(EditInstanceOnly)
	TEnumAsByte<EArithmeticKeyOperation::Type> DisplayPercentQuery;

	UPROPERTY(EditInstanceOnly)
	float DisplayPercentValue;

public:
	DBDBOTS_API FAIHasPerkCondition();
};

FORCEINLINE uint32 GetTypeHash(const FAIHasPerkCondition) { return 0; }
