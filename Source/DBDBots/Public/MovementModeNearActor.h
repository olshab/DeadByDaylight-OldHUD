#pragma once

#include "CoreMinimal.h"
#include "ECharacterMovementTypes.h"
#include "Templates/SubclassOf.h"
#include "EPlayerRole.h"
#include "AITunableParameter.h"
#include "AIRoll.h"
#include "MovementModeNearActor.generated.h"

class AActor;

USTRUCT()
struct FMovementModeNearActor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	ECharacterMovementTypes NearActorMovementMode;

	UPROPERTY(EditInstanceOnly)
	TSubclassOf<AActor> NearActorClass;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter NearDistanceSquared;

	UPROPERTY(EditInstanceOnly)
	FAIRoll SeeActorRoll;

	UPROPERTY(EditInstanceOnly)
	TArray<EPlayerRole> ApplyToPlayerRoles;

public:
	DBDBOTS_API FMovementModeNearActor();
};

FORCEINLINE uint32 GetTypeHash(const FMovementModeNearActor) { return 0; }
