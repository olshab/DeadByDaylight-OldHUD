#pragma once

#include "CoreMinimal.h"
#include "GlobalLoadSpinnerViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreGlobalLoadingSpinnerWidget.generated.h"

UCLASS(EditInlineNew)
class UCoreGlobalLoadingSpinnerWidget : public UCoreBaseUserWidget, public IGlobalLoadSpinnerViewInterface
{
	GENERATED_BODY()

public:
	UCoreGlobalLoadingSpinnerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGlobalLoadingSpinnerWidget) { return 0; }
