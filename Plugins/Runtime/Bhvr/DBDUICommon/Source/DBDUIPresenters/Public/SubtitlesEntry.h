#pragma once

#include "CoreMinimal.h"
#include "SubtitlesEntry.generated.h"

USTRUCT(BlueprintType)
struct FSubtitlesEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString subtitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool isAOneLiner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	bool hasDurationOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	float durationOverride;

public:
	DBDUIPRESENTERS_API FSubtitlesEntry();
};

FORCEINLINE uint32 GetTypeHash(const FSubtitlesEntry) { return 0; }
