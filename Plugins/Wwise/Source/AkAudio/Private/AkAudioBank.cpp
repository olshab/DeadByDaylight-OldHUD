#include "AkAudioBank.h"

UAkAudioBank::UAkAudioBank()
{
	this->AutoLoad = true;
	this->LocalizedPlatformAssetDataMap = TMap<FString, UAkAssetPlatformData*>();
	this->LinkedAkEvents = TSet<TSoftObjectPtr<UAkAudioEvent>>();
	this->CurrentLocalizedPlatformAssetData = NULL;
}
