#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "NewActiveTomePopupPresenter.generated.h"

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UNewActiveTomePopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnRiftButtonClicked();

	UFUNCTION()
	void OnCurrentTomeButtonClicked();

public:
	UNewActiveTomePopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UNewActiveTomePopupPresenter) { return 0; }
