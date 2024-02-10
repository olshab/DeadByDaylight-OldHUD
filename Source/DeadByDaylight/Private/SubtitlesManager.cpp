#include "SubtitlesManager.h"
#include "AkExternalSourceInfo.h"
#include "AkEventWithSubtitle.h"
#include "EAkCallbackType.h"
#include "OnAkPostEventCallback.h"

class UAkGameObject;
class UAkAudioEvent;
class UAkCallbackInfo;

void USubtitlesManager::RecordAnimNotifyPlayedForThisMatch(const FString& animNotify)
{

}

int32 USubtitlesManager::PostAkEventWithSubtitles(UAkGameObject* target, const TArray<FAkEventWithSubtitle>& akEventRandomizer, float maxSubtitleDistance, int32 callbackMask, const FOnAkPostEventCallback& postEventCallback, const TArray<FAkExternalSourceInfo>& externalSources, UAkAudioEvent*& akEventPlayed)
{
	return 0;
}

int32 USubtitlesManager::Post2DAkEventWithSubtitles(const TArray<FAkEventWithSubtitle>& akEventRandomizer, UAkAudioEvent*& akEventPlayed)
{
	return 0;
}

void USubtitlesManager::On3DEventFinished(EAkCallbackType callbackType, UAkCallbackInfo* callbackInfo)
{

}

bool USubtitlesManager::IsDebuggingSubtitles()
{
	return false;
}

bool USubtitlesManager::HasAnimNotifyPlayedForThisMatch(const FString& animNotify)
{
	return false;
}

USubtitlesManager::USubtitlesManager()
{

}
