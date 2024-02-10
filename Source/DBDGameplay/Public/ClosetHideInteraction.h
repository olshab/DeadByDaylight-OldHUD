#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "ClosetHideInteraction.generated.h"

class AActor;
class ADBDPlayer;
class UInteractor;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UClosetHideInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _rushed;

public:
	UFUNCTION(BlueprintCallable)
	void SetPlayerInCloset(ADBDPlayer* player);

	UFUNCTION(BlueprintCallable)
	void SetOtherInteractorsUsable(const bool isEnabled);

	UFUNCTION(BlueprintPure=false, BlueprintCallable)
	void SetCollisionWithCloset(const bool isEnabled, ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	bool IsRushed() const;

	UFUNCTION(BlueprintPure)
	bool IsOccupied() const;

	UFUNCTION(BlueprintPure)
	bool IsInteractingPlayerInsideCloset(const ADBDPlayer* player) const;

	UFUNCTION(BlueprintPure)
	ADBDPlayer* GetPlayerInCloset() const;

	UFUNCTION(BlueprintPure)
	UInteractor* GetInsideInteractor() const;

	UFUNCTION(BlueprintCallable)
	void FireSoundEventFromInteractor(AActor* instigator, ADBDPlayer* instigatingPlayer);

public:
	UClosetHideInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UClosetHideInteraction) { return 0; }
