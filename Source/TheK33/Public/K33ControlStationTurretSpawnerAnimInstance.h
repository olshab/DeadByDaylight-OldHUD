#pragma once

#include "CoreMinimal.h"
#include "DBDBaseAnimInstance.h"
#include "K33ControlStationTurretSpawnerAnimInstance.generated.h"

class UAnimSequence;

UCLASS(NonTransient)
class UK33ControlStationTurretSpawnerAnimInstance : public UDBDBaseAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly)
	bool _isBoxOpening;

	UPROPERTY(BlueprintReadOnly)
	bool _isBoxOpened;

	UPROPERTY(BlueprintReadOnly)
	float _boxOpeningPlayRate;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UAnimSequence* _spawnTurretAnimSequence;

public:
	UK33ControlStationTurretSpawnerAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const UK33ControlStationTurretSpawnerAnimInstance) { return 0; }
