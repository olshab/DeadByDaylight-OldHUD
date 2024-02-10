#pragma once

#include "CoreMinimal.h"
#include "OnPawnAudioEnabled.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "OnPawnAudioDisabled.h"
#include "PawnAudioManager.generated.h"

class ADBDBasePlayer;
class UAkAudioEvent;

UCLASS(BlueprintType)
class UPawnAudioManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void UnregisterSlasherPawnAudio(ADBDBasePlayer* slasherPawn);

	UFUNCTION(BlueprintCallable)
	void RegisterSlasherPawnAudio(ADBDBasePlayer* slasherPawn, FOnPawnAudioEnabled onAudioEnabled, FOnPawnAudioDisabled onAudioDisabled);

	UFUNCTION(BlueprintCallable)
	bool PostAudioEventIfPawnCurrent(ADBDBasePlayer* pawn, UAkAudioEvent* audioEvent);

	UFUNCTION(BlueprintCallable)
	bool IsPawnCurrentlyActive(ADBDBasePlayer* pawn);

	UFUNCTION(BlueprintCallable)
	bool ForcePawnAudioPriority(ADBDBasePlayer* pawn);

public:
	UPawnAudioManager();
};

FORCEINLINE uint32 GetTypeHash(const UPawnAudioManager) { return 0; }
