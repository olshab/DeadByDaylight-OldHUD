#pragma once

#include "CoreMinimal.h"
#include "EImmobilizedState.generated.h"

UENUM(BlueprintType)
enum class EImmobilizedState : uint8
{
	VE_None,
	VE_Hooked,
	VE_Trapped,
	VE_Hiding,
	VE_Dead,
	VE_InDeathBed,
	VE_TwinImmobilized,
};
