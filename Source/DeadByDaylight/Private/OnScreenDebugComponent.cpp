#include "OnScreenDebugComponent.h"
#include "Net/UnrealNetwork.h"

void UOnScreenDebugComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UOnScreenDebugComponent, _messages);
}

UOnScreenDebugComponent::UOnScreenDebugComponent()
{
	this->_messages = TArray<FOnScreenDebugInfo>();
}
