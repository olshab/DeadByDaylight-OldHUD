#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "EKillerAbilities.h"
#include "KillerItemProperty.h"
#include "KillerItemDependencies.generated.h"

USTRUCT(BlueprintType)
struct FKillerItemDependencies: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerAbilities KillerAbility;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FKillerItemProperty> Items;

public:
	DEADBYDAYLIGHT_API FKillerItemDependencies();
};

FORCEINLINE uint32 GetTypeHash(const FKillerItemDependencies) { return 0; }
