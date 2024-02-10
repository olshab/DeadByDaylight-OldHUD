#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "StoreSpecialsRecommendationEditorData.generated.h"

USTRUCT()
struct FStoreSpecialsRecommendationEditorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveTo;

	UPROPERTY(EditAnywhere)
	FString AuricCellOffer;

	UPROPERTY(EditAnywhere)
	TArray<FString> Outfits;

	UPROPERTY(EditAnywhere)
	TArray<FString> Items;

	UPROPERTY(EditAnywhere)
	TArray<FString> RecommendedCategoriesPriority;

public:
	DEADBYDAYLIGHT_API FStoreSpecialsRecommendationEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreSpecialsRecommendationEditorData) { return 0; }
