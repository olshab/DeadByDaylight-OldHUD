#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CustomizationItemPreviewAreaViewData.h"
#include "CustomizationItemOriginViewData.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventCollectionViewInterface.generated.h"

class UStoreCustomizationItemViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEventCollectionViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEventCollectionViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSelectedReward(const int32 selectedIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetPreviewAreaData(const FCustomizationItemPreviewAreaViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetItemsData(const TArray<UStoreCustomizationItemViewData*>& customizationRewardsData, const int32 selectedIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetInstructionWidgetData(const FCustomizationItemOriginViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init(const FEventEntryPopupSkinUIData& skinData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisableInstructionStoreButton();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisableInstructionInputs();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisableInstructionCurrencyButton();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisableInstructionArchivesButton();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeselectReward();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Deinit();

};
