#pragma once

#include "CoreMinimal.h"
#include "EDirectionalInputKey.h"
#include "EDirectionalMiniGameType.h"
#include "DirectionalMiniGameDefinition.generated.h"

USTRUCT(BlueprintType)
struct FDirectionalMiniGameDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	int32 KeysPerSequenceCount;

	UPROPERTY(EditDefaultsOnly)
	bool IsSequenceRandom;

	UPROPERTY(EditDefaultsOnly)
	TArray<EDirectionalInputKey> Sequence;

	UPROPERTY(EditDefaultsOnly)
	EDirectionalMiniGameType Type;

public:
	DBDSHAREDTYPES_API FDirectionalMiniGameDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FDirectionalMiniGameDefinition) { return 0; }
