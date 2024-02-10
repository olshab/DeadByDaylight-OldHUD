#pragma once

#include "CoreMinimal.h"
#include "EMrMarchState.h"
#include "SnowmanBase.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "MrMarch.generated.h"

class USphereComponent;
class UDBDSkeletalMeshComponentBudgeted;
class ADBDPlayer;
class UCapsuleComponent;
class UDBDNavModifierComponent;
class UPrimitiveComponent;
class AActor;

UCLASS()
class WINTEREVENT2023_API AMrMarch : public ASnowmanBase
{
	GENERATED_BODY()

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, NoClear, Export, meta=(AllowPrivateAccess=true))
	UDBDSkeletalMeshComponentBudgeted* _mrMarchSkeletalMesh;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	UCapsuleComponent* _mrMarchCollision;

	UPROPERTY(VisibleAnywhere, NoClear, Export)
	USphereComponent* _jumpscareTriggerZone;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
	UDBDNavModifierComponent* _dbdNavModifierComponent;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _scareTriggerRadius;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _shouldDespawnAfterJumpscare;

	UPROPERTY(EditDefaultsOnly)
	float _mrMarchJumpscareTimerRate;

	UPROPERTY(ReplicatedUsing=OnRep_MrMarchState, Transient)
	EMrMarchState _mrMarchState;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _tagsPreventingJumpscare;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _authority_playersInRange;

private:
	UFUNCTION()
	void OnRep_MrMarchState(EMrMarchState previousState);

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnPlayerJumpscareTriggered(ADBDPlayer* player, const FVector& location);

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_StartMrMarchDestruction();

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnPlayerJumpscared(ADBDPlayer* player, const FVector& jumpscareLocation);

protected:
	UFUNCTION(Exec)
	void DBD_MrMarchSpawn();

	UFUNCTION(Exec)
	void DBD_MrMarchDestroy();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSpawned();

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnDestroyed();

private:
	UFUNCTION()
	void Authority_OnJumpscareTriggerZoneExited(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnJumpscareTriggerZoneEntered(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

protected:
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void Authority_OnJumpscareFinished();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	AMrMarch();
};

FORCEINLINE uint32 GetTypeHash(const AMrMarch) { return 0; }
