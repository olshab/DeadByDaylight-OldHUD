#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "TunableStat.h"
#include "DBDTunableRowHandle.h"
#include "InteractionDefinition.h"
#include "K33ExitTunnelInteraction.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK33_API UK33ExitTunnelInteraction : public UInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _firstAnimationTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _secondAnimationTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _killerInstinctTriggerDistance;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _killerInstinctLingerTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _exitTunnelPenaltyRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _exitTunnelPenaltyPercentage;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _killerInstinctStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _exitTunnelAnimationTime;

	UPROPERTY(EditDefaultsOnly)
	float _toggleMeshVisibilityAnimationPercentageTime;

	UPROPERTY(EditDefaultsOnly)
	FVector _cameraOffset;

	UPROPERTY(EditDefaultsOnly)
	float _cameraRotationSpeed;

	UPROPERTY(EditDefaultsOnly)
	float _fadeOutDuration;

	UPROPERTY(Replicated)
	bool _useExitTimePenalty;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSnapTransitionCompleted(ADBDPlayer* player, const FVector& location, const FRotator& rotation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33ExitTunnelInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK33ExitTunnelInteraction) { return 0; }
