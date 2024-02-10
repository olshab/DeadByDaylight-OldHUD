#pragma once

#include "CoreMinimal.h"
#include "ItemAvailability.h"
#include "EPlayerRole.h"
#include "ItemUIData.h"
#include "DBDTableRowBase.h"
#include "EItemRarity.h"
#include "ECustomizationModifier.h"
#include "CustomizationData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 AssociatedCharacter;

	UPROPERTY(EditAnywhere)
	EPlayerRole AssociatedRole;

	UPROPERTY(EditAnywhere)
	EItemRarity Rarity;

	UPROPERTY(EditAnywhere)
	ECustomizationModifier Prefix;

	UPROPERTY(EditAnywhere)
	FItemUIData UIData;

	UPROPERTY(EditAnywhere)
	FItemAvailability Availability;

	UPROPERTY(EditAnywhere)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString CustomizationId;

	UPROPERTY(EditAnywhere)
	TArray<FText> SearchTags;

public:
	DEADBYDAYLIGHT_API FCustomizationData();
};

FORCEINLINE uint32 GetTypeHash(const FCustomizationData) { return 0; }
