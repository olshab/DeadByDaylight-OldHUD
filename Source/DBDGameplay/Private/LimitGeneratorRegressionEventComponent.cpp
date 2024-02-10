#include "LimitGeneratorRegressionEventComponent.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void ULimitGeneratorRegressionEventComponent::OnRep_RegressionEventsSuffered()
{

}

void ULimitGeneratorRegressionEventComponent::OnKillerProximityZoneForRegressionEventsOverlapEnd(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void ULimitGeneratorRegressionEventComponent::OnKillerProximityZoneForRegressionEventsOverlapBegin(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

int32 ULimitGeneratorRegressionEventComponent::GetMaxNumberRegressionEventsAllowed() const
{
	return 0;
}

void ULimitGeneratorRegressionEventComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULimitGeneratorRegressionEventComponent, _regressionEventsSuffered);
}

ULimitGeneratorRegressionEventComponent::ULimitGeneratorRegressionEventComponent()
{
	this->_regressionEventsSuffered = 0;
	this->_killerProximityZoneRadius = 1600.000000;
	this->_waitTimeAfterGeneratorWasInteractedUponToTriggerVfx = 0.250000;
	this->_killerProximityZoneForRegressionEvents = NULL;
}
