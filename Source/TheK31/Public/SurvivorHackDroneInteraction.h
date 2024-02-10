#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "EDirectionalMinigameResult.h"
#include "SurvivorHackDroneInteraction.generated.h"

class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API USurvivorHackDroneInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FDirectionalMiniGameDefinition _miniGameDefinition;

private:
	UPROPERTY(Replicated)
	bool _isHackingComplete;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _batteryStartingChargePercent;

	UPROPERTY(EditDefaultsOnly)
	FName _playerSnapSocket;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumTimeToAttemptDuration;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _switchToScoutingModeDuration;

private:
	UFUNCTION()
	void Authority_OnMinigameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorHackDroneInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorHackDroneInteraction) { return 0; }
