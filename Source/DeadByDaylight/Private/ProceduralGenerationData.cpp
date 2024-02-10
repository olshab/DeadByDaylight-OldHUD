#include "ProceduralGenerationData.h"

UProceduralGenerationData::UProceduralGenerationData()
{
	this->QuadrantSpawnTypeProperties = TArray<FQuadrantSpawnTypeProperties>();
	this->QuadrantSpawnCategories = TArray<FQuadrantSpawnCategories>();
	this->ThemeProperties_DEPRECATED = TArray<FThemeProperties>();
	this->MaxSurvivorCount = 0;
	this->KillersItemDependencies_DEPRECATED = TArray<FKillerItemDependencies>();
	this->SurvivorItemPopulationProbability = NULL;
	this->SurvivorItemProperty = TArray<FSurvivorItemProperties>();
	this->EscapeStrategyPopulationProbability = NULL;
	this->EscapeStrategyProperties = TArray<FEscapeStrategyProperty>();
	this->EscapeTypeActors = TArray<FEscapeTypeObjects>();
	this->Basements = TArray<TSoftClassPtr<AActor>>();
	this->ElementsPopulation = TArray<FGameplayElementsPopulation>();
	this->ManagedElementsPopulation = TArray<FManagedGameplayElementsPopulation>();
	this->SurvivorGroupingProbabilities = TArray<FSurvivorGroupingProbability>();
	this->ProceduralTileWidth = 0.000000;
	this->ProceduralTileHeight = 0.000000;
	this->ProceduralQuadTileCubeWidth = 500.000000;
	this->DifficultyModifier = 0.000000;
	this->CharacterCameraHeight = 140.000000;
	this->CharacterCollisionRadius = 0.000000;
	this->SpawnerCollisionRadius = 100.000000;
	this->TotemVisualHeight = 100.000000;
	this->ClosestSurvivorDistanceWeight = 1.000000;
	this->KillerDistanceWeight = 1.500000;
	this->SpecialBehaviourPopulation_DEPRECATED = TArray<FSpecialBehaviourPopulation>();
	this->_eventProperties_DEPRECATED = TArray<FEventSubstitionData>();
}
