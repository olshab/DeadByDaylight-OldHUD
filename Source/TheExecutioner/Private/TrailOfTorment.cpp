#include "TrailOfTorment.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void UTrailOfTorment::OnRep_HighlightGenerator(const AGenerator* oldHighlightedGenerator) const
{

}

float UTrailOfTorment::GetCooldownDurationAtLevel() const
{
	return 0.0f;
}

void UTrailOfTorment::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UTrailOfTorment, _highlightedGenerator);
}

UTrailOfTorment::UTrailOfTorment()
{
	this->_trailOfTormentEffect = NULL;
	this->_cooldownDuration = 0.000000;
	this->_highlightPriority = 0;
	this->_highlightedGenerator = NULL;
	this->_statusEffect = NULL;
}
