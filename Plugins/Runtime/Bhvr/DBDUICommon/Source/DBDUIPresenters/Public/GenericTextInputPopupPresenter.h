#pragma once

#include "CoreMinimal.h"
#include "GenericPopupPresenter.h"
#include "GenericTextInputPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class UGenericTextInputPopupPresenter : public UGenericPopupPresenter
{
	GENERATED_BODY()

public:
	UGenericTextInputPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UGenericTextInputPopupPresenter) { return 0; }
