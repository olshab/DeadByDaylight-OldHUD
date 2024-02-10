#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomizationItemPreviewAreaViewData.h"
#include "ECustomizationCategory.h"
#include "ESortingOption.h"
#include "ProfileMenuCustomizationViewInterface.generated.h"

class UStoreCustomizationItemViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UProfileMenuCustomizationViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IProfileMenuCustomizationViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSelectedItem(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPreviewAreaData(const FCustomizationItemPreviewAreaViewData& viewData, const bool noCustomizationEquipped);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetItemsData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetEquipButtonText(const bool canEquip, const bool isEquipped);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init(ECustomizationCategory customizationCategory, ESortingOption sortingOption);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EnableInputs(const bool enable);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeselectItem();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Deinit();

};
