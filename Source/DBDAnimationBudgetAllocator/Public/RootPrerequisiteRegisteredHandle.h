#pragma once

#include "CoreMinimal.h"
#include "RootPrerequisiteRegisteredHandle.generated.h"

class USkeletalMeshComponentBudgeted;

USTRUCT()
struct FRootPrerequisiteRegisteredHandle
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient, Export)
	USkeletalMeshComponentBudgeted* RootPrerequisite;

public:
	DBDANIMATIONBUDGETALLOCATOR_API FRootPrerequisiteRegisteredHandle();
};

FORCEINLINE uint32 GetTypeHash(const FRootPrerequisiteRegisteredHandle) { return 0; }
