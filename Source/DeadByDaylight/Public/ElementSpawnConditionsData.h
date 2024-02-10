#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "SpawnConditions.h"
#include "ETileSpawnPointType.h"
#include "EGameplayElementType.h"
#include "ElementSpawnConditionsData.generated.h"

USTRUCT()
struct FElementSpawnConditionsData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName Name;

	UPROPERTY(EditAnywhere)
	TMap<ETileSpawnPointType, FSpawnConditions> DependencyElementConditions;

	UPROPERTY(EditAnywhere)
	TMap<EGameplayElementType, FSpawnConditions> GameplayElementConditions;

	UPROPERTY(EditAnywhere)
	FSpawnConditions OtherSelvesConditions;

public:
	DEADBYDAYLIGHT_API FElementSpawnConditionsData();
};

FORCEINLINE uint32 GetTypeHash(const FElementSpawnConditionsData) { return 0; }
