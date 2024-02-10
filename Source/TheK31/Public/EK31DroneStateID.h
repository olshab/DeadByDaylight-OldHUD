#pragma once

#include "CoreMinimal.h"
#include "EK31DroneStateID.generated.h"

UENUM(BlueprintType)
enum class EK31DroneStateID : uint8
{
	NONE,
	IN_STASH,
	BEING_DEPLOYED,
	INITIALIZING,
	DISABLED,
	STEALTH,
	SCOUTING,
	ACTIVE,
	BEING_HACKED,
	DESTROYED,
	RECALLING,
};
