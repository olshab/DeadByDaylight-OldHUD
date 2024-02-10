#include "K26P02.h"
#include "GameEventData.h"

float UK26P02::GetGeneratorRegressPercentageAtLevel() const
{
	return 0.0f;
}

void UK26P02::Authority_OnSurvivorHookedOnScourgeHook(const FGameEventData& gameEventData)
{

}

UK26P02::UK26P02()
{
	this->_generatorRegressPercentage = 0.000000;
	this->_hookedPlayers = TSet<ACamperPlayer*>();
}
