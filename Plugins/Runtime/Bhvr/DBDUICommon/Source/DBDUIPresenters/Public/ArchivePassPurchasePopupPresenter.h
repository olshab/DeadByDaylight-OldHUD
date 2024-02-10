#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "ArchivePassPurchasePopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UArchivePassPurchasePopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UArchivePassPurchasePopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchivePassPurchasePopupPresenter) { return 0; }
