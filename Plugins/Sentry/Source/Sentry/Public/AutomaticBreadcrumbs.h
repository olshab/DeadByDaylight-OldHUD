#pragma once

#include "CoreMinimal.h"
#include "AutomaticBreadcrumbs.generated.h"

USTRUCT(BlueprintType)
struct FAutomaticBreadcrumbs
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnMapLoadingStarted;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnMapLoaded;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnGameStateClassChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnGameSessionIDChanged;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bOnUserActivityStringChanged;

public:
	SENTRY_API FAutomaticBreadcrumbs();
};

FORCEINLINE uint32 GetTypeHash(const FAutomaticBreadcrumbs) { return 0; }
