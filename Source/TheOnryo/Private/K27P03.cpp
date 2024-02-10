#include "K27P03.h"

class AGenerator;
class ACamperPlayer;

void UK27P03::Multicast_HighlightBlockedGeneratorForKiller_Implementation(AGenerator* generator)
{

}

void UK27P03::Multicast_ActivateSkillCheck_Implementation(ACamperPlayer* survivor)
{

}

float UK27P03::GetGeneratorProgressionActivationAtLevel() const
{
	return 0.0f;
}

float UK27P03::GetGeneratorBlockedDurationAtLevel() const
{
	return 0.0f;
}

UK27P03::UK27P03()
{
	this->_generatorProgressionActivation = 0.000000;
	this->_generatorBlockedDuration = 0.000000;
	this->_authority_blockedGeneratorsAndTimeToUnblock = TMap<TWeakObjectPtr<AGenerator>, FFastTimer>();
	this->_authority_affectedRepairersAndTheirGenerators = TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<AGenerator>>();
}
