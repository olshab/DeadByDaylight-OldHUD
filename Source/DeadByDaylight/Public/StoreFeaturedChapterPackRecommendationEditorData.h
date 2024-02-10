#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedChapterPackEditorData.h"
#include "StoreFeaturedChapterPackRecommendationEditorData.generated.h"

USTRUCT()
struct FStoreFeaturedChapterPackRecommendationEditorData: public FDBDTableRowBase
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
	TArray<FStoreFeaturedChapterPackEditorData> ChapterPacks;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedChapterPackRecommendationEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedChapterPackRecommendationEditorData) { return 0; }
