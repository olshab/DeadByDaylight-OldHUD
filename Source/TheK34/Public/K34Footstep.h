#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "K34FootstepVisibilityRaycastDefinition.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "TunableStat.h"
#include "EK34Foot.h"
#include "UObject/NoExportTypes.h"
#include "K34Footstep.generated.h"

class ASlasherPlayer;

UCLASS()
class THEK34_API AK34Footstep : public AActor, public IPoolableActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Replicated)
	EK34Foot _currentFootType;

private:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FTunableStat _footstepLifetime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta=(AllowPrivateAccess=true))
	FTunableStat _footstepMaximumVisibilityDistance;

	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged OnAcquiredChanged;

	UPROPERTY(ReplicatedUsing=OnRep_IsActive)
	bool _isActive;

	UPROPERTY(Replicated, Transient)
	AActor* _owningActor;

	UPROPERTY(Replicated, Transient)
	ASlasherPlayer* _owningKiller;

	UPROPERTY(EditDefaultsOnly)
	TArray<FK34FootstepVisibilityRaycastDefinition> _visibilityRaycastProperties;

private:
	UFUNCTION()
	void OnRep_IsActive();

public:
	UFUNCTION(BlueprintPure)
	FVector GetOwningActorsVelocity() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_TriggerFootstepVisibility(EK34Foot footType, bool isVisible);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AK34Footstep();
};

FORCEINLINE uint32 GetTypeHash(const AK34Footstep) { return 0; }
