#pragma once

#include "CoreMinimal.h"
#include "EPlayerRole.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedKillerEditorData.h"
#include "StoreFeaturedSurvivorEditorData.h"
#include "StoreFeaturedCharacterRecommendationEditorData.generated.h"

USTRUCT()
struct FStoreFeaturedCharacterRecommendationEditorData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString Id;

	UPROPERTY(EditAnywhere)
	FString InclusionVersion;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveFrom;

	UPROPERTY(EditAnywhere)
	FDateTime ActiveTo;

	UPROPERTY(EditAnywhere)
	TArray<EPlayerRole> Slots;

	UPROPERTY(EditAnywhere)
	TArray<FStoreFeaturedKillerEditorData> Killers;

	UPROPERTY(EditAnywhere)
	TArray<FStoreFeaturedSurvivorEditorData> Survivors;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedCharacterRecommendationEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedCharacterRecommendationEditorData) { return 0; }
