#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "StoreSubPresenter.generated.h"

class UShopManager;

UCLASS(Abstract)
class UStoreSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	UShopManager* _shopManager;

protected:
	UFUNCTION()
	void OnSubTabSelected(int32 subTabId);

public:
	UStoreSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSubPresenter) { return 0; }
