#pragma once

#include "CoreMinimal.h"
#include "StatProperty.h"
#include "K34ScamperMovementSpeedSetting.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FK34ScamperMovementSpeedSetting
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* SpeedCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* MouseTurnLimitationCurve;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* ControllerTurnLimitationCurve;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty AccelerationMultiplierModifier;

	UPROPERTY(EditDefaultsOnly)
	FStatProperty Duration;

public:
	THEK34_API FK34ScamperMovementSpeedSetting();
};

FORCEINLINE uint32 GetTypeHash(const FK34ScamperMovementSpeedSetting) { return 0; }
