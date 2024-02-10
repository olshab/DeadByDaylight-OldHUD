#pragma once

#include "CoreMinimal.h"
#include "AISkill_FindInteractable.h"
#include "AITunableParameter.h"
#include "Templates/SubclassOf.h"
#include "AISkill_FindInteractable_Drone.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DBDBOTS_API UAISkill_FindInteractable_Drone : public UAISkill_FindInteractable
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter BaseActiveWeight;

	UPROPERTY(EditDefaultsOnly)
	FAITunableParameter BaseScoutingWeight;

	UPROPERTY(EditInstanceOnly)
	TArray<TSubclassOf<AActor>> ValidGoalObjectClasses;

	UPROPERTY(EditInstanceOnly)
	float DroneRadiusMargin;

	UPROPERTY(EditInstanceOnly)
	float DroneScoutingAutoDiscoverRange;

	UPROPERTY(EditInstanceOnly)
	float DroneStealthAutoDiscoverRange;

public:
	UAISkill_FindInteractable_Drone();
};

FORCEINLINE uint32 GetTypeHash(const UAISkill_FindInteractable_Drone) { return 0; }
