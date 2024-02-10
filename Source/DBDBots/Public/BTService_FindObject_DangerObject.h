#pragma once

#include "CoreMinimal.h"
#include "BTService_FindObject.h"
#include "DangerObjectData.h"
#include "AITunableParameter.h"
#include "ESurvivorFleePathStrategy.h"
#include "BTService_FindObject_DangerObject.generated.h"

class UDBDDangerPredictionComponent;

UCLASS()
class DBDBOTS_API UBTService_FindObject_DangerObject : public UBTService_FindObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	bool GetDangerObjectsFromHostileStimulus;

	UPROPERTY(EditInstanceOnly)
	ESurvivorFleePathStrategy FleePathStrategy;

	UPROPERTY(EditInstanceOnly)
	float HideFromLosCooldown;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter NotSensedReactionDelay;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter SensedReactionDelay;

private:
	UPROPERTY(Transient)
	TMap<UDBDDangerPredictionComponent*, FDangerObjectData> _lastDangerObjectsMap;

public:
	UBTService_FindObject_DangerObject();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_FindObject_DangerObject) { return 0; }
