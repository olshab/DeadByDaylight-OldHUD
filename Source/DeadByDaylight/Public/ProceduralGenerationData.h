#pragma once

#include "CoreMinimal.h"
#include "KillerItemDependencies.h"
#include "Engine/DataAsset.h"
#include "QuadrantSpawnCategories.h"
#include "SurvivorItemProperties.h"
#include "QuadrantSpawnTypeProperties.h"
#include "ThemeProperties.h"
#include "EscapeStrategyProperty.h"
#include "EscapeTypeObjects.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayElementsPopulation.h"
#include "ManagedGameplayElementsPopulation.h"
#include "SurvivorGroupingProbability.h"
#include "UObject/NoExportTypes.h"
#include "SpecialBehaviourPopulation.h"
#include "EventSubstitionData.h"
#include "ProceduralGenerationData.generated.h"

class UCurveFloat;
class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UProceduralGenerationData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	TArray<FQuadrantSpawnTypeProperties> QuadrantSpawnTypeProperties;

	UPROPERTY(EditDefaultsOnly)
	TArray<FQuadrantSpawnCategories> QuadrantSpawnCategories;

	UPROPERTY()
	TArray<FThemeProperties> ThemeProperties_DEPRECATED;

	UPROPERTY(EditDefaultsOnly)
	int32 MaxSurvivorCount;

	UPROPERTY()
	TArray<FKillerItemDependencies> KillersItemDependencies_DEPRECATED;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* SurvivorItemPopulationProbability;

	UPROPERTY(EditDefaultsOnly)
	TArray<FSurvivorItemProperties> SurvivorItemProperty;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* EscapeStrategyPopulationProbability;

	UPROPERTY(EditDefaultsOnly)
	TArray<FEscapeStrategyProperty> EscapeStrategyProperties;

	UPROPERTY(EditDefaultsOnly)
	TArray<FEscapeTypeObjects> EscapeTypeActors;

	UPROPERTY(EditDefaultsOnly)
	TArray<TSoftClassPtr<AActor>> Basements;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayElementsPopulation> ElementsPopulation;

	UPROPERTY(EditDefaultsOnly)
	TArray<FManagedGameplayElementsPopulation> ManagedElementsPopulation;

	UPROPERTY(EditDefaultsOnly)
	TArray<FSurvivorGroupingProbability> SurvivorGroupingProbabilities;

	UPROPERTY(EditDefaultsOnly)
	FVector ProceduralMapOffset;

	UPROPERTY(EditDefaultsOnly)
	float ProceduralTileWidth;

	UPROPERTY(EditDefaultsOnly)
	float ProceduralTileHeight;

	UPROPERTY(EditDefaultsOnly)
	FVector ProceduralQuadTileMapOffset;

	UPROPERTY(EditDefaultsOnly)
	float ProceduralQuadTileCubeWidth;

	UPROPERTY(EditDefaultsOnly)
	float DifficultyModifier;

	UPROPERTY(EditDefaultsOnly)
	float CharacterCameraHeight;

	UPROPERTY(EditDefaultsOnly)
	float CharacterCollisionRadius;

	UPROPERTY(EditDefaultsOnly)
	float SpawnerCollisionRadius;

	UPROPERTY(EditDefaultsOnly)
	float TotemVisualHeight;

	UPROPERTY(EditDefaultsOnly)
	float ClosestSurvivorDistanceWeight;

	UPROPERTY(EditDefaultsOnly)
	float KillerDistanceWeight;

private:
	UPROPERTY()
	TArray<FSpecialBehaviourPopulation> SpecialBehaviourPopulation_DEPRECATED;

	UPROPERTY()
	TArray<FEventSubstitionData> _eventProperties_DEPRECATED;

public:
	UProceduralGenerationData();
};

FORCEINLINE uint32 GetTypeHash(const UProceduralGenerationData) { return 0; }
