#pragma once

#include "CoreMinimal.h"
#include "MaterialGroupCondition.generated.h"

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FMaterialGroupCondition, bool&, ReturnValue);
