#pragma once

#include "CoreMinimal.h"
#include "BaseLockerInteraction.h"
#include "SearchLockerInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class DBDINTERACTION_API USearchLockerInteraction : public UBaseLockerInteraction
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	bool _possibleWhenOccupied;

	UPROPERTY(EditDefaultsOnly)
	float _killerFacingLockerToleranceAngle;

public:
	USearchLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const USearchLockerInteraction) { return 0; }
