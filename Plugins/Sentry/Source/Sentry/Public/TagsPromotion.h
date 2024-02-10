#pragma once

#include "CoreMinimal.h"
#include "TagsPromotion.generated.h"

USTRUCT(BlueprintType)
struct FTagsPromotion
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPromoteBuildConfiguration;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPromoteTargetType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPromoteEngineMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPromoteIsGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPromoteIsStandalone;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bPromoteIsUnattended;

public:
	SENTRY_API FTagsPromotion();
};

FORCEINLINE uint32 GetTypeHash(const FTagsPromotion) { return 0; }
