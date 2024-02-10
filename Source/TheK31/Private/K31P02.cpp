#include "K31P02.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UK31P02::Multicast_RevealAndMakeSurvivorScream_Implementation(ACamperPlayer* survivor)
{

}

float UK31P02::GetScreamDistance() const
{
	return 0.0f;
}

float UK31P02::GetRevealAuraSeconds() const
{
	return 0.0f;
}

float UK31P02::GetActivePerkDurationAtLevel() const
{
	return 0.0f;
}

void UK31P02::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK31P02, _isPerkActive);
}

UK31P02::UK31P02()
{
	this->_revealAuraToKillerEffectClass = NULL;
	this->_revealAuraSeconds = 4.000000;
	this->_screamDistance = 2800.000000;
	this->_isPerkActive = false;
}
