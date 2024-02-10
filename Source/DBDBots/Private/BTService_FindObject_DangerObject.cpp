#include "BTService_FindObject_DangerObject.h"

UBTService_FindObject_DangerObject::UBTService_FindObject_DangerObject()
{
	this->GetDangerObjectsFromHostileStimulus = false;
	this->FleePathStrategy = ESurvivorFleePathStrategy::None;
	this->HideFromLosCooldown = 10.000000;
	this->_lastDangerObjectsMap = TMap<UDBDDangerPredictionComponent*, FDangerObjectData>();
}
