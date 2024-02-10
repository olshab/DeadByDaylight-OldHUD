#include "DisableTerrorRadiusAudioGameplayMutator.h"
#include "Net/UnrealNetwork.h"

void UDisableTerrorRadiusAudioGameplayMutator::OnRep_IsInitialized()
{

}

void UDisableTerrorRadiusAudioGameplayMutator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDisableTerrorRadiusAudioGameplayMutator, _isInitialized);
}

UDisableTerrorRadiusAudioGameplayMutator::UDisableTerrorRadiusAudioGameplayMutator()
{
	this->_isInitialized = false;
}
