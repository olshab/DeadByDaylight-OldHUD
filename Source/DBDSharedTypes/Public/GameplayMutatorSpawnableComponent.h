#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPtr.h"
#include "GameplayMutatorSpawnableComponent.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FGameplayMutatorSpawnableComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UActorComponent> Component;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool ShouldSpawnOnSurvivor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool ShouldSpawnOnKiller;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool ShouldSpawnOnGameState;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CustomParam;

public:
	DBDSHAREDTYPES_API FGameplayMutatorSpawnableComponent();
};

FORCEINLINE uint32 GetTypeHash(const FGameplayMutatorSpawnableComponent) { return 0; }
