#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "ArchiveTierPurchasePopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UArchiveTierPurchasePopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnConfirmPurchase(int32 tiersToPurchaseNumber);

public:
	UArchiveTierPurchasePopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UArchiveTierPurchasePopupPresenter) { return 0; }
