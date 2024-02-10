#include "K26P01.h"
#include "Net/UnrealNetwork.h"

void UK26P01::OnRep_BlockedGenerators()
{

}

void UK26P01::Authority_OnInRangeChanged(const bool inRange)
{

}

void UK26P01::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UK26P01, _blockedGenerators);
}

UK26P01::UK26P01()
{
	this->_generatorBlockDuration = 0.000000;
	this->_hookedRange = 0.000000;
	this->_auraRevealDuration = 6.000000;
	this->_finalGeneratorBlockDuration = 40.000000;
	this->_survivorsToBeHooked = 0;
	this->_timedRevealToKillerClass = NULL;
	this->_blockedGenerators = TArray<AGenerator*>();
	this->_hookedSurvivors = TArray<AActor*>();
	this->_timedRevealToKillerEffect = NULL;
}
