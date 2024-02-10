#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GeneratorWithMostProgressTracker.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDGAMEPLAY_API UGeneratorWithMostProgressTracker : public UActorComponent
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnGeneratorCompleted(bool isAutoCompleted);

public:
	UGeneratorWithMostProgressTracker();
};

FORCEINLINE uint32 GetTypeHash(const UGeneratorWithMostProgressTracker) { return 0; }
