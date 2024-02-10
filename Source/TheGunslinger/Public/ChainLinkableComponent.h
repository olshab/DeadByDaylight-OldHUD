#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChainLinkable.h"
#include "Components/ActorComponent.h"
#include "TagStateBool.h"
#include "ChainLinkableComponent.generated.h"

class UStatusEffect;
class URiflePlayerLinker;
class UBaseCameraTargetingStrategy;
class UPlayerReelInputAccelerationConstraintStrategy;
class UChainPlayerMovementStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEGUNSLINGER_API UChainLinkableComponent : public UActorComponent, public IChainLinkable
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBaseCameraTargetingStrategy> _cameraTargetingStrategyClass;

	UPROPERTY(Transient, meta=(BindWidgetOptional))
	UPlayerReelInputAccelerationConstraintStrategy* _inputAccelerationStrategy;

private:
	UPROPERTY(Transient, Export)
	URiflePlayerLinker* _chainLink;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _movementStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _linkedStatusEffectClass;

	UPROPERTY(Replicated)
	FTagStateBool _isLinkedLingering;

	UPROPERTY(Replicated, Export)
	UChainPlayerMovementStatusEffect* _movementStatusEffect;

	UPROPERTY(Transient)
	UBaseCameraTargetingStrategy* _cameraStrategy;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UChainLinkableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UChainLinkableComponent) { return 0; }
