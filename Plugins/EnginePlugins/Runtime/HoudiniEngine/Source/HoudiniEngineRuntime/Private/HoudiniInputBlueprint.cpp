#include "HoudiniInputBlueprint.h"

UHoudiniInputBlueprint::UHoudiniInputBlueprint()
{
	this->BPComponents = TArray<UHoudiniInputSceneComponent*>();
	this->BPSceneComponents = TSet<TSoftObjectPtr<UObject>>();
	this->LastUpdateNumComponentsAdded = 0;
	this->LastUpdateNumComponentsRemoved = 0;
}
