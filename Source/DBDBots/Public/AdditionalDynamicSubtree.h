#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AdditionalDynamicSubtree.generated.h"

class UBehaviorTree;

USTRUCT()
struct FAdditionalDynamicSubtree
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer DynamicSubtreeContexts;

	UPROPERTY(EditAnywhere)
	bool AlwaysEnable;

	UPROPERTY(EditAnywhere)
	UBehaviorTree* DynamicSubtree;

public:
	DBDBOTS_API FAdditionalDynamicSubtree();
};

FORCEINLINE uint32 GetTypeHash(const FAdditionalDynamicSubtree) { return 0; }
