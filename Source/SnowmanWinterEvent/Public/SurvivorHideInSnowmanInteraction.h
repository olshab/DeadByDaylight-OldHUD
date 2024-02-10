#pragma once

#include "CoreMinimal.h"
#include "HideInSnowmanInteraction.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "ECamperDamageState.h"
#include "SurvivorHideInSnowmanInteraction.generated.h"

class ADBDPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class USurvivorHideInSnowmanInteraction : public UHideInSnowmanInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(Replicated, Transient)
	bool _shouldRunOutOfSnowman;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _minimumTimeToRunAndExit;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _cameraZoomBack;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToZoomEnter;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _timeToZoomExit;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _nonDamagingKillerSnowmanDestroyingEvents;

	UPROPERTY(EditAnywhere)
	TArray<FGameplayTag> _gameEventsToCauseScream;

	UPROPERTY(EditDefaultsOnly)
	TArray<FString> _overridingKillerInteractionIds;

	UPROPERTY(Replicated)
	bool _shouldScreamOnExit;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSurvivorScreamFromExit(ADBDPlayer* playerExiting);

private:
	UFUNCTION()
	void Authority_OnDamageStateChanged(ECamperDamageState oldDamageState, ECamperDamageState currentDamageState);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorHideInSnowmanInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHideInSnowmanInteraction) { return 0; }
