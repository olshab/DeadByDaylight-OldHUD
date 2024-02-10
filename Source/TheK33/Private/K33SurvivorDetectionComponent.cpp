#include "K33SurvivorDetectionComponent.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UK33SurvivorDetectionComponent::OnRep_SurvivorsInRange()
{

}

void UK33SurvivorDetectionComponent::Authority_OnSurvivorInRangeChanged(const bool inRange, ACamperPlayer* player)
{

}

void UK33SurvivorDetectionComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33SurvivorDetectionComponent, _survivorsInRange);
}

UK33SurvivorDetectionComponent::UK33SurvivorDetectionComponent()
{
	this->_survivorStatusEffect = NULL;
	this->_survivorsInRange = TArray<TWeakObjectPtr<ACamperPlayer>>();
}
