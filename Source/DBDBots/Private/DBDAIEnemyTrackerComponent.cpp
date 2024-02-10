#include "DBDAIEnemyTrackerComponent.h"

void UDBDAIEnemyTrackerComponent::OnLevelReadyToPlay()
{

}

UDBDAIEnemyTrackerComponent::UDBDAIEnemyTrackerComponent()
{
	this->EnemyTracker = NULL;
	this->EnemyTargetPrediction = NULL;
	this->DataUpdateInterval = 0.100000;
	this->TargetPredictionUpdateInterval = 0.250000;
	this->BaseKnownInfoExpirationTime = 8.000000;
	this->DistanceInfoExpirationTime = 0.003200;
	this->_trackedEnemiesData = TMap<TWeakObjectPtr<ACharacter>, FAITrackedEnemyData>();
}
