#include "K34TipToeDistraction.h"
#include "K34DistractionGroundDetectorComponent.h"
#include "K34DistractionNavMovementComponent.h"
#include "AkComponent.h"

class ADBDPlayer;
class UCustomizedAudioComponent;

void AK34TipToeDistraction::Multicast_ShowDistractionDebug_Implementation(const float halfSize, const float radius)
{

}

void AK34TipToeDistraction::Multicast_OnSpawned_Implementation(ADBDPlayer* owningPlayer)
{

}

void AK34TipToeDistraction::Multicast_OnDeactivated_Implementation()
{

}

ADBDPlayer* AK34TipToeDistraction::GetOwningPlayer()
{
	return NULL;
}

FString AK34TipToeDistraction::GetFootAudioSurfaceName() const
{
	return TEXT("");
}

UCustomizedAudioComponent* AK34TipToeDistraction::GetCustomizedAudio() const
{
	return NULL;
}

UAkComponent* AK34TipToeDistraction::GetAKComponent() const
{
	return NULL;
}

AK34TipToeDistraction::AK34TipToeDistraction()
{
	this->_minTimeIdle = 0.000000;
	this->_maxCountSameLocationConsideredStuck = 3;
	this->_distanceConsideredStuck = 10.000000;
	this->_randomBehaviourCheckRate = 1.500000;
	this->_overlapRadius = 100.000000;
	this->_cosmeticFootSpawnRate = 0.333000;
	this->_isAcquiredFromPool = false;
	this->_isInUse = false;
	this->_navMovementComponent = CreateDefaultSubobject<UK34DistractionNavMovementComponent>(TEXT("K34DistractionNavComponent"));
	this->_groundDetector = CreateDefaultSubobject<UK34DistractionGroundDetectorComponent>(TEXT("GroundDetector"));
	this->_akComponent = CreateDefaultSubobject<UAkComponent>(TEXT("AKComponent"));
}
