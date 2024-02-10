#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DBDTunableRowHandle.h"
#include "Engine/NetSerialization.h"
#include "ChainLinkableComponent.h"
#include "Templates/SubclassOf.h"
#include "GameEventData.h"
#include "ESightStatus.h"
#include "SurvivorChainLinkableComponent.generated.h"

class USurvivorReelVelocityAdditiveStrategy;
class ADBDPlayer;
class ASlasherPlayer;
class UStatusEffect;

UCLASS(Blueprintable, meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API USurvivorChainLinkableComponent : public UChainLinkableComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _pullbackAngle;

	UPROPERTY(EditAnywhere)
	FDBDTunableRowHandle _immobilizationDuration;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _linkableInteractionTags;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer _cancelableInteractionTags;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USurvivorReelVelocityAdditiveStrategy> _velocityAdditiveStrategyClass;

	UPROPERTY(Replicated)
	FVector_NetQuantize10 _linkedMoveInput;

	UPROPERTY(Export)
	UStatusEffect* _immobilizationEffect;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _immobilizationStatusEffectClass;

	UPROPERTY(ReplicatedUsing=OnRep_VelocityAdditiveStrategy, Transient, Export)
	USurvivorReelVelocityAdditiveStrategy* _velocityAdditiveStrategy;

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnSurvivorBreakFreeFromHarpoon(FGameplayTag gameEventType, const FGameEventData& gameEventData);

	UFUNCTION(BlueprintImplementableEvent)
	void OnSightStatusChanged(ESightStatus status);

private:
	UFUNCTION()
	void OnRep_VelocityAdditiveStrategy();

protected:
	UFUNCTION(BlueprintImplementableEvent)
	void OnLocallyObservedChanged(ADBDPlayer* player);

	UFUNCTION(BlueprintImplementableEvent)
	void OnKillerSet(ASlasherPlayer* killer);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	USurvivorChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorChainLinkableComponent) { return 0; }
