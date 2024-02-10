#include "PawnAudioManager.h"
#include "OnPawnAudioDisabled.h"
#include "OnPawnAudioEnabled.h"

class ADBDBasePlayer;
class UAkAudioEvent;

void UPawnAudioManager::UnregisterSlasherPawnAudio(ADBDBasePlayer* slasherPawn)
{

}

void UPawnAudioManager::RegisterSlasherPawnAudio(ADBDBasePlayer* slasherPawn, FOnPawnAudioEnabled onAudioEnabled, FOnPawnAudioDisabled onAudioDisabled)
{

}

bool UPawnAudioManager::PostAudioEventIfPawnCurrent(ADBDBasePlayer* pawn, UAkAudioEvent* audioEvent)
{
	return false;
}

bool UPawnAudioManager::IsPawnCurrentlyActive(ADBDBasePlayer* pawn)
{
	return false;
}

bool UPawnAudioManager::ForcePawnAudioPriority(ADBDBasePlayer* pawn)
{
	return false;
}

UPawnAudioManager::UPawnAudioManager()
{

}
