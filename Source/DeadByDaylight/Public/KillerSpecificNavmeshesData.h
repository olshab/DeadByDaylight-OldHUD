#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBase.h"
#include "GameplayTagContainer.h"
#include "KillerSpecificNavmeshesData.generated.h"

USTRUCT(BlueprintType)
struct FKillerSpecificNavmeshesData: public FDBDTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag KillerPresenceTag;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName NavmeshName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 NavmeshIndex;

public:
	DEADBYDAYLIGHT_API FKillerSpecificNavmeshesData();
};

FORCEINLINE uint32 GetTypeHash(const FKillerSpecificNavmeshesData) { return 0; }
