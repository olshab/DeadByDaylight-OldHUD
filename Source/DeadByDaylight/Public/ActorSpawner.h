#pragma once

#include "CoreMinimal.h"
#include "EGameplayElementType.h"
#include "EventSpawnablePositionDropdown.h"
#include "WeightedElement.h"
#include "SpawnElement.h"
#include "ActorSpawnerProperties.h"
#include "Components/SceneComponent.h"
#include "UObject/SoftObjectPtr.h"
#include "DataTableDropdown.h"
#include "UObject/NoExportTypes.h"
#include "ActorSpawnedDelegate.h"
#include "ActorSpawner.generated.h"

class AActor;
class UBoxComponent;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UActorSpawner : public USceneComponent, public IWeightedElement, public ISpawnElement
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameplayElementType Type;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSoftClassPtr<AActor> Visualization;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ActivatedByDefault;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorSpawnerProperties> ActivatedSceneElement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FActorSpawnerProperties> DeactivatedSceneElement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Weight;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnCountMax;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 SpawnPriorityTier;

	UPROPERTY(EditAnywhere)
	FEventSpawnablePositionDropdown EventSpawnablePosition;

	UPROPERTY(EditAnywhere)
	FDataTableDropdown EventSpawnableShapePreset;

	UPROPERTY(EditAnywhere)
	FVector MinBoundOverride;

	UPROPERTY(EditAnywhere)
	FVector MaxBoundOverride;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName> TagsToBePassedOverToActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool AttachSpawnedActorToAttachedSocket;

	UPROPERTY(BlueprintAssignable)
	FActorSpawnedDelegate OnAsyncActorSpawned;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool WeightInfluenceable;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	bool WeightInfluencer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
	float Cost;

	UPROPERTY(Transient)
	UClass* _toSpawn;

	UPROPERTY(Transient)
	TWeakObjectPtr<AActor> _spawnedActorOnAuthority;

	UPROPERTY(Transient, Export)
	UBoxComponent* _minBoundBox;

	UPROPERTY(Transient, Export)
	UBoxComponent* _maxBoundBox;

public:
	UFUNCTION(BlueprintPure)
	bool UseActivatedElement() const;

	UFUNCTION(BlueprintPure)
	bool IsEnabled() const;

	UFUNCTION(BlueprintCallable)
	void EditorForceSpawnVisualization();

	UFUNCTION(BlueprintCallable)
	void AuthoritySelect(bool selected);

	UFUNCTION(BlueprintPure)
	AActor* AuthorityGetSpawnedActor() const;

	UFUNCTION(BlueprintCallable)
	void Authority_SpawnActorAsyncEvent();

public:
	UActorSpawner();
};

FORCEINLINE uint32 GetTypeHash(const UActorSpawner) { return 0; }
