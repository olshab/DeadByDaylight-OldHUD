#pragma once

#include "CoreMinimal.h"
#include "ESteamPipeState.h"
#include "GameFramework/Actor.h"
#include "DBDTunableRowHandle.h"
#include "Engine/EngineTypes.h"
#include "SteamPipe.generated.h"

class UBoxComponent;
class UPrimitiveComponent;
class USteamPipeEffectComponent;

UCLASS()
class DBDGAMEPLAY_API ASteamPipe : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UBoxComponent* _overlapVolume;

	UPROPERTY(ReplicatedUsing=OnRep_SteamPipeState)
	ESteamPipeState _currentSteamPipeState;

	UPROPERTY(Transient, Export)
	TArray<TWeakObjectPtr<USteamPipeEffectComponent>> _overlappingPlayerComponents;

	UPROPERTY(EditDefaultsOnly)
	float _debugResetTimer;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _warningStateTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _activeTime;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _warningStateTimeNoCharge;

private:
	UFUNCTION()
	void OnRep_SteamPipeState();

public:
	UFUNCTION(BlueprintPure)
	ESteamPipeState GetCurrentSteamPipeState() const;

protected:
	UFUNCTION(BlueprintImplementableEvent, BlueprintCosmetic)
	void Cosmetic_OnSteamPipeStateChanged(ESteamPipeState newState);

private:
	UFUNCTION()
	void Authority_OnEndOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex);

	UFUNCTION()
	void Authority_OnBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	ASteamPipe();
};

FORCEINLINE uint32 GetTypeHash(const ASteamPipe) { return 0; }
