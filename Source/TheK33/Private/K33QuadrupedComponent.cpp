#include "K33QuadrupedComponent.h"
#include "Net/UnrealNetwork.h"

void UK33QuadrupedComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK33QuadrupedComponent, _isInQuadrupedMode);
}

UK33QuadrupedComponent::UK33QuadrupedComponent()
{

}
