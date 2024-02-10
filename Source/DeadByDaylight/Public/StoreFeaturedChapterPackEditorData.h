#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedChapterPackEditorData.generated.h"

USTRUCT()
struct FStoreFeaturedChapterPackEditorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString AssociatedDlcId;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedChapterPackEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedChapterPackEditorData) { return 0; }
