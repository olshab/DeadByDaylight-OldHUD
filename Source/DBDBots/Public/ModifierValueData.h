#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ModifierValueData.generated.h"

USTRUCT()
struct FModifierValueData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FGameplayTag ModifierTag;

	UPROPERTY(EditInstanceOnly)
	bool EstimateWithSemantics;

	UPROPERTY(EditInstanceOnly)
	FGameplayTag SemanticTag;

	UPROPERTY(EditInstanceOnly)
	bool UsesItemAddons;

public:
	DBDBOTS_API FModifierValueData();
};

FORCEINLINE uint32 GetTypeHash(const FModifierValueData) { return 0; }
