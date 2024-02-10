#pragma once

#include "CoreMinimal.h"
#include "EGuidedState.generated.h"

UENUM(BlueprintType)
enum class EGuidedState : uint8
{
	VE_None,
	VE_PrepBeingKilled,
	VE_BeingKilled,
	VE_PrepGuidedAction,
	VE_BeingHelpedOffHookFront,
	VE_BeingPickedUp,
	VE_BeingPutDown,
	VE_BeingCarried,
	VE_BeingPutOnHook,
	VE_BeingHealed,
	VE_BeingPulledFromCloset,
	VE_BeingHelpedFromTrap,
	VE_AttachReverseBearTrap,
	VE_BeingMended,
	VE_BeingInjectedWithSerum,
	VE_CarriedByK29Rush,
	VE_BeingCleansedOfK29Infection,
};
