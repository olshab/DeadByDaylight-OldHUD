#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AkExternalSourceInfo.h"
#include "AkEventWithSubtitle.h"
#include "EAkCallbackType.h"
#include "OnAkPostEventCallback.h"
#include "SubtitlesManager.generated.h"

class UAkGameObject;
class UAkAudioEvent;
class UAkCallbackInfo;

UCLASS(BlueprintType)
class DEADBYDAYLIGHT_API USubtitlesManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	static void RecordAnimNotifyPlayedForThisMatch(const FString& animNotify);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static int32 PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FOnAkPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources, UAkAudioEvent*& akEventPlayed);

	UFUNCTION(BlueprintCallable, BlueprintCosmetic)
	static int32 Post2DAkEventWithSubtitles(const TArray<FAkEventWithSubtitle>& akEventRandomizer, UAkAudioEvent*& akEventPlayed);

private:
	UFUNCTION()
	void On3DEventFinished(EAkCallbackType callbackType, UAkCallbackInfo* callbackInfo);

public:
	UFUNCTION(BlueprintPure, BlueprintCosmetic)
	static bool IsDebuggingSubtitles();

	UFUNCTION(BlueprintCallable)
	static bool HasAnimNotifyPlayedForThisMatch(const FString& animNotify);

public:
	USubtitlesManager();
};

FORCEINLINE uint32 GetTypeHash(const USubtitlesManager) { return 0; }
