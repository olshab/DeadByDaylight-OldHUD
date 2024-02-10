#pragma once

#include "CoreMinimal.h"
#include "SpecialEventLoadingTextData.h"
#include "LoadingTextContentData.generated.h"

USTRUCT()
struct FLoadingTextContentData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FSpecialEventLoadingTextData> LoadingText;

	UPROPERTY(SkipSerialization)
	bool LoadingText_isset;

public:
	DEADBYDAYLIGHT_API FLoadingTextContentData();
};

FORCEINLINE uint32 GetTypeHash(const FLoadingTextContentData) { return 0; }
