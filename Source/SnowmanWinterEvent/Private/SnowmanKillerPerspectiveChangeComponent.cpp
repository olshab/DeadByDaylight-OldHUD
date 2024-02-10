#include "SnowmanKillerPerspectiveChangeComponent.h"
#include "Net/UnrealNetwork.h"

class ASlasherPlayer;

void USnowmanKillerPerspectiveChangeComponent::SetFirstPersonTargetData(const ASlasherPlayer* killer)
{

}

void USnowmanKillerPerspectiveChangeComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USnowmanKillerPerspectiveChangeComponent, _snowmanSpringArm);
}

USnowmanKillerPerspectiveChangeComponent::USnowmanKillerPerspectiveChangeComponent()
{
	this->_springArmClass = NULL;
	this->_pitchLimitLower = -40.000000;
	this->_pitchLimitUpper = 50.000000;
	this->_snowmanSpringArm = NULL;
}
