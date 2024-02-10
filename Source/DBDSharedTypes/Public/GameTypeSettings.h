#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EGameType.h"
#include "EGameTypeModifierName.h"
#include "TypeFlexibleTunable.h"
#include "GameplayMutatorSpawnableComponent.h"
#include "GameTypeSettings.generated.h"

USTRUCT()
struct FGameTypeSettings: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	EGameType GameType;

	UPROPERTY(EditDefaultsOnly)
	TMap<EGameTypeModifierName, FTypeFlexibleTunable> Modifiers;

	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayMutatorSpawnableComponent> Mutators;

public:
	DBDSHAREDTYPES_API FGameTypeSettings();
};

FORCEINLINE uint32 GetTypeHash(const FGameTypeSettings) { return 0; }
