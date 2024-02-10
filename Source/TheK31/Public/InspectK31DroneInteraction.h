#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ChargeableInteractionDefinition.h"
#include "DBDTunableRowHandle.h"
#include "InspectK31DroneInteraction.generated.h"

class AActor;
class UK31DroneActionProcessor;
class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class THEK31_API UInspectK31DroneInteraction : public UChargeableInteractionDefinition
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, NoClear)
	TSubclassOf<UK31DroneActionProcessor> _actionProcessorClass;

	UPROPERTY(EditDefaultsOnly, NoClear)
	FDBDTunableRowHandle _inputInterval;

	UPROPERTY(EditAnywhere)
	bool _enableMaxSpeedSlowdown;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _chargingSpeedCurve;

	UPROPERTY(EditAnywhere)
	UCurveFloat* _dechargingSpeedCurve;

	UPROPERTY(Replicated, Export)
	UK31DroneActionProcessor* _actionProcessor;

private:
	UFUNCTION(Server, Reliable)
	void Server_SetIsPressingInput(bool isPressing);

	UFUNCTION()
	void OnChargeCompletedChanged(bool completed, const TArray<AActor*>& instigatorsForCompletion);

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UInspectK31DroneInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UInspectK31DroneInteraction) { return 0; }
