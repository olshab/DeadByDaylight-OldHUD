#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedKillerEditorData.generated.h"

USTRUCT()
struct FStoreFeaturedKillerEditorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString CharacterIndex;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedKillerEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedKillerEditorData) { return 0; }
