#pragma once

#include "CoreMinimal.h"
#include "EKillerAttackType.generated.h"

UENUM(BlueprintType)
enum class EKillerAttackType : uint8
{
	None,
	MeleeAttack,
	SpecialAttack,
};
