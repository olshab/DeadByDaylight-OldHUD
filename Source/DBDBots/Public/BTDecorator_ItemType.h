#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "EItemType.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_ItemType.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_ItemType : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBTargetObject;

	UPROPERTY(EditInstanceOnly)
	EItemType ItemType;

public:
	UBTDecorator_ItemType();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_ItemType) { return 0; }
