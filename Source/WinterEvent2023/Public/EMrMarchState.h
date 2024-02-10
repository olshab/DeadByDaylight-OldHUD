#pragma once

#include "CoreMinimal.h"
#include "EMrMarchState.generated.h"

UENUM(BlueprintType)
enum class EMrMarchState : uint8
{
	Spawned,
	BeingDestroyed,
	Destroyed,
	Scare,
	Waiting,
};
