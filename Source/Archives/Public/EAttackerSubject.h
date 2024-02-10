#pragma once

#include "CoreMinimal.h"
#include "EAttackerSubject.generated.h"

UENUM(BlueprintType)
enum class EAttackerSubject : uint8
{
	Instigator,
	Target,
};
