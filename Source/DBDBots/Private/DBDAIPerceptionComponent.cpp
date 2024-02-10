#include "DBDAIPerceptionComponent.h"

UDBDAIPerceptionComponent::UDBDAIPerceptionComponent()
{
	this->RangedAttackTypes = TArray<EAttackType>();
	this->RangedKillerAbilities = TArray<EKillerAbilities>();
	this->FastVaultKillerAbilities = TArray<EKillerAbilities>();
	this->UseSimulatedCameraLocationForStimulusReceiverLocation = false;
	this->CameraOffset = 170.000000;
	this->StimulusHalfFOV = 40.000000;
	this->OutOfChaseFullPeripheralVisionRange = 50.000000;
	this->InChaseFullPeripheralVisionRange = 650.000000;
	this->DarknessMaxVisionRange = 1800.000000;
	this->_objOverridingSenses = TMap<UClass*, UObject*>();
	this->_originalSenseConfigs = TArray<UAISenseConfig*>();
	this->_detectedHostileStimuli = TArray<FAIDetectedStimulus>();
	this->ThreatDividerForNonControlledActor = 3.000000;
	this->HighThreatDistanceForNonControlledActor = 200.000000;
	this->CurrentThreatDivider = 0.800000;
	this->TerrorDistanceMultiplierForNonControlledActor = 3.000000;
}
