#pragma once

#include "CoreMinimal.h"
#include "EAttackType.h"
#include "AITunableParameter.h"
#include "AIDetectedStimulus.h"
#include "Perception/AIPerceptionComponent.h"
#include "AIDisplayDebugInterface.h"
#include "EKillerAbilities.h"
#include "DBDAIPerceptionComponent.generated.h"

class UAISenseConfig;
class UObject;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDBOTS_API UDBDAIPerceptionComponent : public UAIPerceptionComponent, public IAIDisplayDebugInterface
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<EAttackType> RangedAttackTypes;

	UPROPERTY(EditDefaultsOnly)
	TArray<EKillerAbilities> RangedKillerAbilities;

	UPROPERTY(EditDefaultsOnly)
	TArray<EKillerAbilities> FastVaultKillerAbilities;

	UPROPERTY(EditDefaultsOnly)
	bool UseSimulatedCameraLocationForStimulusReceiverLocation;

	UPROPERTY(EditDefaultsOnly)
	float CameraOffset;

	UPROPERTY(EditDefaultsOnly)
	float StimulusHalfFOV;

	UPROPERTY(EditDefaultsOnly)
	float OutOfChaseFullPeripheralVisionRange;

	UPROPERTY(EditDefaultsOnly)
	float InChaseFullPeripheralVisionRange;

	UPROPERTY(EditDefaultsOnly)
	float DarknessMaxVisionRange;

private:
	UPROPERTY(Transient)
	TMap<UClass*, UObject*> _objOverridingSenses;

	UPROPERTY(Transient)
	TArray<UAISenseConfig*> _originalSenseConfigs;

	UPROPERTY(Transient)
	TArray<FAIDetectedStimulus> _detectedHostileStimuli;

	UPROPERTY(Transient)
	FAIDetectedStimulus _bestDetectedHostileStimulus;

	UPROPERTY(Transient)
	FAIDetectedStimulus _lastBestDetectedHostileStimulusInMemory;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter _activePhaseWalkingNoiseMaxRange;

	UPROPERTY(EditDefaultsOnly)
	float ThreatDividerForNonControlledActor;

	UPROPERTY(EditDefaultsOnly)
	float HighThreatDistanceForNonControlledActor;

	UPROPERTY(EditDefaultsOnly)
	float CurrentThreatDivider;

	UPROPERTY(EditDefaultsOnly)
	float TerrorDistanceMultiplierForNonControlledActor;

public:
	UDBDAIPerceptionComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDBDAIPerceptionComponent) { return 0; }
