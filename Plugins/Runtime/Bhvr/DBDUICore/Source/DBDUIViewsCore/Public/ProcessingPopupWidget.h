#pragma once

#include "CoreMinimal.h"
#include "ProcessingPopupViewInterface.h"
#include "CoreBasePopupWidget.h"
#include "ProcessingPopupWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UProcessingPopupWidget : public UCoreBasePopupWidget, public IProcessingPopupViewInterface
{
	GENERATED_BODY()

public:
	UProcessingPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UProcessingPopupWidget) { return 0; }
