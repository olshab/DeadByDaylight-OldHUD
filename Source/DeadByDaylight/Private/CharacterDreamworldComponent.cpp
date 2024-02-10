#include "CharacterDreamworldComponent.h"
#include "Net/UnrealNetwork.h"

class UObject;
class ADBDPlayer;

bool UCharacterDreamworldComponent::ShouldShowVignette() const
{
	return false;
}

void UCharacterDreamworldComponent::OnRep_IsInDreamworld()
{

}

bool UCharacterDreamworldComponent::IsInDreamworld() const
{
	return false;
}

ADBDPlayer* UCharacterDreamworldComponent::GetLocallyObservedOrLocalCharacter(UObject* worldContextObject)
{
	return NULL;
}

void UCharacterDreamworldComponent::FireWakeUpScoreEvent(ADBDPlayer* instigator)
{

}

void UCharacterDreamworldComponent::Authority_SetIsInDreamworld(bool newValue, bool isScripted)
{

}

void UCharacterDreamworldComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UCharacterDreamworldComponent, _isInDreamworld);
}

UCharacterDreamworldComponent::UCharacterDreamworldComponent()
{
	this->_mobileDreamworldPostProcessClass = NULL;
	this->_mobileDreamworldPostProcess = NULL;
}
