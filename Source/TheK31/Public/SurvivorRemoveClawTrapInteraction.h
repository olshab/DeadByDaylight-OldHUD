#pragma once

#include "CoreMinimal.h"
#include "DirectionalMiniGameDefinition.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "EDirectionalMinigameResult.h"
#include "SurvivorRemoveClawTrapInteraction.generated.h"

class UK31SurvivorClawTrapComponent;
class ACamperPlayer;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API USurvivorRemoveClawTrapInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	FDirectionalMiniGameDefinition _miniGameDefinition;

private:
	UPROPERTY(Replicated)
	bool _isHackingComplete;

	UPROPERTY(Transient, Export)
	UK31SurvivorClawTrapComponent* _survivorClawTrapComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _batteryRechargeOnFailedRemovalPercent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _requiredTimeToRemainStillBeforeInteractingDuration;

private:
	UFUNCTION()
	void Authority_OnMinigameEnd(ACamperPlayer* survivor, EDirectionalMinigameResult result);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorRemoveClawTrapInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorRemoveClawTrapInteraction) { return 0; }
