#include "LevelReadyToPlayPlayerComponent.h"
#include "Net/UnrealNetwork.h"

void ULevelReadyToPlayPlayerComponent::Server_SetIsReadyToPlay_Implementation(uint32 readyToPlay)
{

}

void ULevelReadyToPlayPlayerComponent::OnRep_LevelReadyToPlayRequirementsTarget()
{

}

void ULevelReadyToPlayPlayerComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ULevelReadyToPlayPlayerComponent, _levelReadyToPlayRequirementsTarget);
}

ULevelReadyToPlayPlayerComponent::ULevelReadyToPlayPlayerComponent()
{
	this->_levelReadyToPlayRequirementsTarget = TArray<FLevelReadyToPlayRequirements>();
	this->_levelReadyToPlayRequirementState = TArray<FLevelReadyToPlayRequirements>();
}
