#pragma once

#include "CoreMinimal.h"
#include "CustomSoundFXData.h"
#include "AkEventWithSubtitle.generated.h"

class UAkAudioEvent;

USTRUCT(BlueprintType)
struct FAkEventWithSubtitle
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* AudioEvent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8 Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool HasSubtitles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomSoundFXData> RequiredAudioSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FCustomSoundFXData> ForbiddenAudioSwitch;

	UPROPERTY(EditAnywhere)
	uint32 DelayMsBeforeSubtitles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SubtitleEventPriority;

public:
	DEADBYDAYLIGHT_API FAkEventWithSubtitle();
};

FORCEINLINE uint32 GetTypeHash(const FAkEventWithSubtitle) { return 0; }
