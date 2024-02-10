#pragma once

#include "CoreMinimal.h"
#include "EMenuOpened.h"
#include "LTESubMenuOpeningChange.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLTESubMenuOpeningChange, EMenuOpened, menuOpened);
