#include "EventSpawnableComponent.h"
#include "Components/BoxComponent.h"

UEventSpawnableComponent::UEventSpawnableComponent()
{
	this->SpawnPositionPreferences = TArray<FEventSpawnablePositionDropdown>();
	this->BudgetOverride = 0.000000;
	this->_boundBox = CreateDefaultSubobject<UBoxComponent>(TEXT("BoundBox"));
}
