#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "StoreSubPresenter.h"
#include "UObject/ScriptInterface.h"
#include "StoreSpecialsSubPresenter.generated.h"

class IStoreSpecialsViewInterface;
class UStoreCustomizationItemViewData;

UCLASS()
class DBDUIPRESENTERS_API UStoreSpecialsSubPresenter : public UStoreSubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IStoreSpecialsViewInterface> _storeSpecialsWidget;

	UPROPERTY(Transient)
	TArray<UStoreCustomizationItemViewData*> _cachedSpecialsItems;

private:
	UFUNCTION()
	void RequestMoveToCharactersPage(const FStoreRedirectionData& storeRedirectionData);

	UFUNCTION()
	void OnPremiumTransactionCompleted(bool success);

	UFUNCTION()
	void OnAuricCellSpecialOtherOptions();

	UFUNCTION()
	void OnAuricCellSpecialBuyAction(FName bundleId);

public:
	UStoreSpecialsSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UStoreSpecialsSubPresenter) { return 0; }
