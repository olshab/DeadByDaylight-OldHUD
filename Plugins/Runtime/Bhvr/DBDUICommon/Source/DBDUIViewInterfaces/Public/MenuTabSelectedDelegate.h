#pragma once

#include "CoreMinimal.h"
#include "EProfileMenuState.h"
#include "MenuTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuTabSelectedDelegate, const EProfileMenuState, menuState);
