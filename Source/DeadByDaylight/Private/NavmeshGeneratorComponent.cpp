#include "NavmeshGeneratorComponent.h"

UNavmeshGeneratorComponent::UNavmeshGeneratorComponent()
{
	this->_availableNavmeshBoundsVolumes = TArray<ANavMeshBoundsVolume*>();
}
