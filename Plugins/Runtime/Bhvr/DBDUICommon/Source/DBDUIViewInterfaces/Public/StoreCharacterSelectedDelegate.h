#pragma once

#include "CoreMinimal.h"
#include "StoreCharacterSelectedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FStoreCharacterSelectedDelegate, const int32, characterIndex);
