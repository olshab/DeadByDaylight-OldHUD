#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnAcquiredChanged.h"
#include "PoolableActor.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "DBDTunableRowHandle.h"
#include "K34TipToeDistraction.generated.h"

class ADBDPlayer;
class UAkComponent;
class UBaseGroundDetectorComponent;
class UK34DistractionNavMovementComponent;
class UCustomizedAudioComponent;

UCLASS()
class AK34TipToeDistraction : public AActor, public IPoolableActor, public INavAgentInterface
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintAssignable)
	FOnAcquiredChanged _onAcquiredChanged;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maximumVisibilityDistance;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _footStepSpawnRate;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chanceToRandomlyTurnBackOnPath;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chanceToRandomlyChangeDirection;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _chanceToRandomlyStop;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _newTargetRadius;

	UPROPERTY(EditDefaultsOnly)
	float _minTimeIdle;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxTimeIdle;

	UPROPERTY(EditDefaultsOnly)
	int8 _maxCountSameLocationConsideredStuck;

	UPROPERTY(EditDefaultsOnly)
	float _distanceConsideredStuck;

	UPROPERTY(EditDefaultsOnly)
	float _randomBehaviourCheckRate;

	UPROPERTY(EditDefaultsOnly)
	float _overlapRadius;

	UPROPERTY(EditDefaultsOnly)
	float _cosmeticFootSpawnRate;

	UPROPERTY(Transient)
	bool _isAcquiredFromPool;

	UPROPERTY(Transient)
	bool _isInUse;

	UPROPERTY(EditAnywhere, Export)
	UK34DistractionNavMovementComponent* _navMovementComponent;

	UPROPERTY(VisibleAnywhere, Export)
	UBaseGroundDetectorComponent* _groundDetector;

	UPROPERTY(VisibleAnywhere, Export)
	UAkComponent* _akComponent;

private:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_ShowDistractionDebug(const float halfSize, const float radius);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnSpawned(ADBDPlayer* owningPlayer);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_OnDeactivated();

protected:
	UFUNCTION(BlueprintCallable)
	ADBDPlayer* GetOwningPlayer();

	UFUNCTION(BlueprintPure)
	FString GetFootAudioSurfaceName() const;

	UFUNCTION(BlueprintPure)
	UCustomizedAudioComponent* GetCustomizedAudio() const;

	UFUNCTION(BlueprintPure)
	UAkComponent* GetAKComponent() const;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnFootHitGround();

public:
	AK34TipToeDistraction();
};

FORCEINLINE uint32 GetTypeHash(const AK34TipToeDistraction) { return 0; }
