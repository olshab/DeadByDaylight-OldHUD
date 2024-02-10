#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "CoreMemoryFragmentComponent.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryFragmentComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(ReplicatedUsing=OnRep_OwningPlayer, Transient)
	ADBDPlayer* _owningPlayer;

	UPROPERTY(ReplicatedUsing=OnRep_Controller, Transient)
	ACoreMemoryChallengePlayerSpecificController* _controller;

	UPROPERTY(ReplicatedUsing=OnRep_WasTriggered)
	bool _wasTriggered;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _killerPreventingTags;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _camperPreventingTags;

	UPROPERTY(ReplicatedUsing=OnRep_IsDespawned)
	bool _isDespawned;

	UPROPERTY(ReplicatedUsing=OnRep_WasCollected)
	bool _wasCollected;

private:
	UFUNCTION(Server, Reliable)
	void Server_OnFragmentCollected();

	UFUNCTION()
	void OnRep_WasTriggered();

	UFUNCTION()
	void OnRep_WasCollected();

	UFUNCTION()
	void OnRep_OwningPlayer();

	UFUNCTION()
	void OnRep_IsDespawned();

	UFUNCTION()
	void OnRep_Controller();

	UFUNCTION()
	void OnLocallyObservedChanged(bool isLocallyObserved);

public:
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_FragmentDespawnCountdown(float floatVal) const;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCoreMemoryFragmentComponent();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryFragmentComponent) { return 0; }
