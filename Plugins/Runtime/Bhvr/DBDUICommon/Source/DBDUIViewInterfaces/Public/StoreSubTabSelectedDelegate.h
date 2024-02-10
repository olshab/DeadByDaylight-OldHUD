#pragma once

#include "CoreMinimal.h"
#include "StoreSubTabSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreSubTabSelectedDelegate, int32, menuState);
