#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "K33KillerControlStationSelectorComponent.generated.h"

class UK33TunnelNavigationComponent;
class UAimDirectionProvider;
class ADBDActorIndicator;
class AK33ControlStation;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK33KillerControlStationSelectorComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _thresholdDeltaSquaredDistanceForBestTargetRecalculation;

	UPROPERTY(EditDefaultsOnly)
	float _minDeltaDotProductForBestTargetRecalculation;

	UPROPERTY(EditDefaultsOnly)
	float _minDotProductForEligibleControlStationTarget;

	UPROPERTY(EditDefaultsOnly)
	float _minDistanceForEligibleControlStationTargetOutsideTunnel;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<ADBDActorIndicator> _actorIndicatorClass;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UK33TunnelNavigationComponent> _tunnelNavigationComponentClass;

	UPROPERTY(Transient)
	ADBDActorIndicator* _indicatorInstance;

	UPROPERTY(Transient, Export)
	UK33TunnelNavigationComponent* _tunnelNavigationComponentInstance;

	UPROPERTY(ReplicatedUsing=OnRep_Replicated_SelectedControlStation)
	AK33ControlStation* _replicated_selectedControlStation;

	UPROPERTY(EditDefaultsOnly, Export)
	UAimDirectionProvider* _aimDirectionProvider;

private:
	UFUNCTION(Server, Reliable, WithValidation)
	void Server_SetSelectedControlStation(AK33ControlStation* controlStation);

	UFUNCTION()
	void OnRep_Replicated_SelectedControlStation(AK33ControlStation* previousSelectedControlStation);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK33KillerControlStationSelectorComponent();
};

FORCEINLINE uint32 GetTypeHash(const UK33KillerControlStationSelectorComponent) { return 0; }
