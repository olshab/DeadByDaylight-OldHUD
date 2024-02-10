#pragma once

#include "CoreMinimal.h"
#include "OutlineUpdateStrategy.h"
#include "UObject/NoExportTypes.h"
#include "K32KillerPodOutlineUpdateStrategy.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK32KillerPodOutlineUpdateStrategy : public UOutlineUpdateStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _lastPodShowTime;

	UPROPERTY(EditDefaultsOnly)
	FLinearColor _revealedColorToSurvivor;

public:
	UK32KillerPodOutlineUpdateStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UK32KillerPodOutlineUpdateStrategy) { return 0; }
