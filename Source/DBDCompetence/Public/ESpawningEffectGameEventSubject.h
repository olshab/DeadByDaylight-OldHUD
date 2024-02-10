#pragma once

#include "CoreMinimal.h"
#include "ESpawningEffectGameEventSubject.generated.h"

UENUM(BlueprintType)
enum class ESpawningEffectGameEventSubject : uint8
{
	Instigator,
	Target,
};
