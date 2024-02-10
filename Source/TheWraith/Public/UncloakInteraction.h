#pragma once

#include "CoreMinimal.h"
#include "BaseCloakInteraction.h"
#include "TunableStat.h"
#include "UncloakInteraction.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UUncloakInteraction : public UBaseCloakInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	UCurveFloat* _postUncloakSpeedCurve;

	UPROPERTY(EditAnywhere)
	FTunableStat _postUncloakSpeedCurveDuration;

public:
	UUncloakInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UUncloakInteraction) { return 0; }
