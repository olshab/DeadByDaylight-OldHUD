#pragma once

#include "CoreMinimal.h"
#include "ECustomizationCategory.h"
#include "StoreCategorySelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreCategorySelectedDelegate, const ECustomizationCategory, category);
