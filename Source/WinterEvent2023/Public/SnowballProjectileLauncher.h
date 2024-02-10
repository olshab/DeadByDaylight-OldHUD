#pragma once

#include "CoreMinimal.h"
#include "BaseProjectileLauncher.h"
#include "DBDTunableRowHandle.h"
#include "UObject/NoExportTypes.h"
#include "SnowballProjectileLauncher.generated.h"

class UCurveFloat;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class WINTEREVENT2023_API USnowballProjectileLauncher : public UBaseProjectileLauncher
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _launchSpeed;

	UPROPERTY(EditDefaultsOnly)
	FRotator _angleOffset;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _snowballPitchCurve;

	UPROPERTY(EditDefaultsOnly)
	float _snowballLaunchPitchMin;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _aimAngleOffsetPitchSurvivorFemale;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _aimAngleOffsetPitchSurvivorMale;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _aimAngleOffsetPitchKiller;

	UPROPERTY(EditDefaultsOnly)
	FVector _survivorLaunchPositionOffset;

	UPROPERTY(EditDefaultsOnly)
	FVector _killerLaunchPositionOffset;

	UPROPERTY(EditDefaultsOnly)
	float _snowballLaunchPitchMax;

	UPROPERTY(EditDefaultsOnly)
	FName _characterBoneNameCamper;

	UPROPERTY(EditDefaultsOnly)
	FName _characterBoneNameSlasher;

public:
	USnowballProjectileLauncher();
};

FORCEINLINE uint32 GetTypeHash(const USnowballProjectileLauncher) { return 0; }
