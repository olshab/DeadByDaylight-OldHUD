#pragma once

#include "CoreMinimal.h"
#include "SignificanceStrategy.h"
#include "PerPlatformProperties.h"
#include "LinearSignificanceStrategy.generated.h"

UCLASS(EditInlineNew)
class ULinearSignificanceStrategy : public USignificanceStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FPerPlatformFloat _maxDistance;

	UPROPERTY(EditDefaultsOnly)
	bool _updateEvenIfNotRendered;

public:
	ULinearSignificanceStrategy();
};

FORCEINLINE uint32 GetTypeHash(const ULinearSignificanceStrategy) { return 0; }
