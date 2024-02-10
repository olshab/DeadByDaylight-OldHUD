#pragma once

#include "CoreMinimal.h"
#include "AkEventWithSubtitle.h"
#include "UObject/NoExportTypes.h"
#include "CommentatorAudioContext.generated.h"

USTRUCT()
struct FCommentatorAudioContext
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FAkEventWithSubtitle> AudioEvents;

	UPROPERTY(EditAnywhere)
	int32 PlayProbability;

	UPROPERTY(EditAnywhere)
	FInt32Range Delay;

	UPROPERTY(EditAnywhere)
	uint8 NumMatchesBeforeContextRepeat;

	UPROPERTY(EditAnywhere)
	uint8 NumOccurencesBeforeEventRepeat;

public:
	DEADBYDAYLIGHT_API FCommentatorAudioContext();
};

FORCEINLINE uint32 GetTypeHash(const FCommentatorAudioContext) { return 0; }
