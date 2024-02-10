#pragma once

#include "CoreMinimal.h"
#include "SubPresenter.h"
#include "ESortingOption.h"
#include "UObject/ScriptInterface.h"
#include "ESortingOrder.h"
#include "ProfileMenuCustomizationSubPresenter.generated.h"

class UStoreCustomizationItemViewData;
class IProfileMenuCustomizationViewInterface;

UCLASS()
class DBDUIPRESENTERS_API UProfileMenuCustomizationSubPresenter : public USubPresenter
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TScriptInterface<IProfileMenuCustomizationViewInterface> _profileMenuCustomizationWidget;

	UPROPERTY()
	TArray<UStoreCustomizationItemViewData*> _itemsData;

	UPROPERTY()
	TArray<UStoreCustomizationItemViewData*> _displayedItemsData;

private:
	UFUNCTION()
	void OnSearchBarTextChanged(const FString& enteredText);

	UFUNCTION()
	void OnRewardGridItemClicked(const int32 selectedIndex);

	UFUNCTION()
	void OnEquipButtonClicked();

	UFUNCTION()
	void OnCustomizationSortingChanged(const ESortingOption itemSorting, const ESortingOrder sortingOrder);

public:
	UProfileMenuCustomizationSubPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UProfileMenuCustomizationSubPresenter) { return 0; }
