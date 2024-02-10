#pragma once

#include "CoreMinimal.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "IllusionaryDoctorOutlineStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UIllusionaryDoctorOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

public:
	UIllusionaryDoctorOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UIllusionaryDoctorOutlineStrategy) { return 0; }
