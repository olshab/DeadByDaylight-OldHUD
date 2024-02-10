#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SourceBasedOutlineUpdateStrategy.h"
#include "HauntOutlineStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UHauntOutlineStrategy : public USourceBasedOutlineUpdateStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FLinearColor _displayColor;

public:
	UHauntOutlineStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UHauntOutlineStrategy) { return 0; }
