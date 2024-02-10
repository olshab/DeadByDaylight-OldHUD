#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshComponentData.generated.h"

class UDBDSkeletalMeshComponentBudgeted;

USTRUCT()
struct FSkeletalMeshComponentData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, Export)
	UDBDSkeletalMeshComponentBudgeted* SkeletalMeshComponent;

public:
	DBDANIMATIONBUDGETALLOCATOR_API FSkeletalMeshComponentData();
};

FORCEINLINE uint32 GetTypeHash(const FSkeletalMeshComponentData) { return 0; }
