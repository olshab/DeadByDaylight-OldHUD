#pragma once

#include "CoreMinimal.h"
#include "ProgressionSystemInfoPopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "ProgressionSystemInfoPopupWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UProgressionSystemInfoPopupWidget : public UCoreGenericPopupWidget, public IProgressionSystemInfoPopupViewInterface
{
	GENERATED_BODY()

public:
	UProgressionSystemInfoPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProgressionSystemInfoPopupWidget) { return 0; }
