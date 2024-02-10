#pragma once

#include "CoreMinimal.h"
#include "PoseableHusk.h"
#include "K33Husk.generated.h"

class UMontagePlayer;
class UTerrorRadiusEmitterComponent;
class UAkComponent;
class UCurveFloat;

UCLASS()
class THEK33_API AK33Husk : public APoseableHusk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, meta=(BindWidgetOptional))
	UMontagePlayer* _montagePlayer;

private:
	UPROPERTY(EditDefaultsOnly, Export)
	UTerrorRadiusEmitterComponent* _terrorRadiusEmitterComponent;

	UPROPERTY(EditDefaultsOnly, Export)
	UAkComponent* _huskAudioComponent;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _terrorRadiusDistanceOffsetCurve;

public:
	AK33Husk();
};

FORCEINLINE uint32 GetTypeHash(const AK33Husk) { return 0; }
