#pragma once

#include "CoreMinimal.h"
#include "GenericRefreshingPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreGenericRefreshingPopupWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreGenericRefreshingPopupWidget : public UCoreGenericPopupWidget, public IGenericRefreshingPopupViewInterface
{
	GENERATED_BODY()

public:
	UCoreGenericRefreshingPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreGenericRefreshingPopupWidget) { return 0; }
