#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EventSpawnablePositionDropdown.h"
#include "UObject/NoExportTypes.h"
#include "EventSpawnableComponent.generated.h"

class UBoxComponent;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UEventSpawnableComponent : public USceneComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FEventSpawnablePositionDropdown> SpawnPositionPreferences;

	UPROPERTY(EditAnywhere)
	FVector Bound;

	UPROPERTY(EditAnywhere)
	float BudgetOverride;

private:
	UPROPERTY(Transient, Export)
	UBoxComponent* _boundBox;

public:
	UEventSpawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const UEventSpawnableComponent) { return 0; }
