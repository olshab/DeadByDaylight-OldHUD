#include "ForThePeople.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UForThePeople::Server_OnActionInputPressed_Implementation()
{

}

void UForThePeople::OnRep_SetIsHealStartedOnServer() const
{

}

void UForThePeople::Multicast_OnHealAbilityUsed_Implementation(ACamperPlayer* healer, ACamperPlayer* healTarget, float amountHealed)
{

}

float UForThePeople::GetBrokenEffectDurationAtLevel() const
{
	return 0.0f;
}

void UForThePeople::Client_OnActionInputPressedEnded_Implementation()
{

}

void UForThePeople::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UForThePeople, _isHealStartedOnServer);
}

UForThePeople::UForThePeople()
{
	this->_isHealStartedOnServer = false;
	this->_brokenEffectDurations = 0.000000;
	this->_forThePeopleBrokenEffect = NULL;
	this->_forThePeopleObsessionEffect = NULL;
}
