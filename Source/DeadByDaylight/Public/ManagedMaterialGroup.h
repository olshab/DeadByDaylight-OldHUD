#pragma once

#include "CoreMinimal.h"
#include "MaterialGroupCondition.h"
#include "ManagedMaterialGroup.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FManagedMaterialGroup
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UObject* Source;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Group;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FMaterialGroupCondition Condition;

public:
	DEADBYDAYLIGHT_API FManagedMaterialGroup();
};

FORCEINLINE uint32 GetTypeHash(const FManagedMaterialGroup) { return 0; }
