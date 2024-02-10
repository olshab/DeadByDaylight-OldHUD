#pragma once

#include "CoreMinimal.h"
#include "OnTutorialButtonClickedDelegate.generated.h"

class UCoreButtonWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTutorialButtonClickedDelegate, UCoreButtonWidget*, clickedTutorialButton);
