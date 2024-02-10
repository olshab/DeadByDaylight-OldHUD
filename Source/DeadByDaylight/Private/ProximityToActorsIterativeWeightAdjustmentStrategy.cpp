#include "ProximityToActorsIterativeWeightAdjustmentStrategy.h"

UProximityToActorsIterativeWeightAdjustmentStrategy::UProximityToActorsIterativeWeightAdjustmentStrategy()
{
	this->_unmatchedActorLocations = TArray<USceneComponent*>();
	this->_selectedSpawners = TArray<TScriptInterface<IWeightedElement>>();
	this->_currentPass = 0;
	this->_penaltyFromDistanceToClosestSpawnObject = NULL;
	this->_penaltyFromDistanceToClosestSpawnObjectWhenActorHasOtherSpawnObjectNearby = NULL;
	this->_scoreFromDistanceFromClosestActor = NULL;
	this->_spawnerCountPerActor = 1;
}
