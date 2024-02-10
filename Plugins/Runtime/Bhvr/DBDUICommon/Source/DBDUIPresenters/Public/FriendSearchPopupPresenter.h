#pragma once

#include "CoreMinimal.h"
#include "GenericTextInputPopupPresenter.h"
#include "FriendSearchPopupPresenter.generated.h"

UCLASS(EditInlineNew)
class UFriendSearchPopupPresenter : public UGenericTextInputPopupPresenter
{
	GENERATED_BODY()

public:
	UFriendSearchPopupPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UFriendSearchPopupPresenter) { return 0; }
