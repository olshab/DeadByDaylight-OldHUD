#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StoreFeaturedSurvivorEditorData.generated.h"

USTRUCT()
struct FStoreFeaturedSurvivorEditorData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString CharacterIndex;

	UPROPERTY(EditAnywhere)
	FSoftObjectPath Image;

public:
	DEADBYDAYLIGHT_API FStoreFeaturedSurvivorEditorData();
};

FORCEINLINE uint32 GetTypeHash(const FStoreFeaturedSurvivorEditorData) { return 0; }
