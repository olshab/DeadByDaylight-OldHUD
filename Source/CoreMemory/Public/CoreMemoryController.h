#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "CoreMemoryController.generated.h"

class ACoreMemoryChallengePlayerSpecificController;
class ACoreMemoryPortal;
class UCoreMemoryBehaviourBase;
class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UCoreMemoryController : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, Export)
	TArray<UCoreMemoryBehaviourBase*> _behaviours;

	UPROPERTY(Replicated, Transient)
	TArray<ACoreMemoryChallengePlayerSpecificController*> _playerSpecificControllers;

	UPROPERTY(EditDefaultsOnly)
	FName _archiveSpecialBehaviourId;

	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<ACoreMemoryPortal> _coreMemoryPortalClass;

	UPROPERTY(ReplicatedUsing=OnRep_CoreMemoryPortal)
	ACoreMemoryPortal* _coreMemoryPortal;

private:
	UFUNCTION()
	void OnRep_CoreMemoryPortal();

	UFUNCTION()
	void Authority_OnCharacterAdded(ADBDPlayer* player);

	UFUNCTION()
	void Authority_CreatePlayerSpecificController(ADBDPlayer* player);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UCoreMemoryController();
};

FORCEINLINE uint32 GetTypeHash(const UCoreMemoryController) { return 0; }
