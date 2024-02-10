#pragma once

#include "CoreMinimal.h"
#include "ArchivePassPurchasePopupViewInterface.h"
#include "CoreGenericPopupWidget.h"
#include "CoreArchivePassPurchasePopupWidget.generated.h"

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreArchivePassPurchasePopupWidget : public UCoreGenericPopupWidget, public IArchivePassPurchasePopupViewInterface
{
	GENERATED_BODY()

protected:
	UFUNCTION(BlueprintPure)
	FText GetTranslatedAvailabilityTitleText() const;

public:
	UCoreArchivePassPurchasePopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreArchivePassPurchasePopupWidget) { return 0; }
