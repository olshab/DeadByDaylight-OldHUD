#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ELoadoutSlot.h"
#include "TabWidgetData.h"
#include "LoadoutMenuViewInterface.generated.h"

class ULoadoutMenuViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API ULoadoutMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API ILoadoutMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void UpdatePresetData(const TArray<int32>& presetData, const int32 selectedPreset);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSelectedInventoryItem(const TArray<int32>& selectedIndex, const bool isUnequip);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSelectableCharacters(const TArray<FTabWidgetData>& selectableCharacters, const FTabWidgetData selectedCharacterData, const int32 botIndex);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLoadoutMenuSlotData(const TArray<ULoadoutMenuViewData*>& loadoutMenuSlotButtonData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetLoadoutMenuInventoryData(const TArray<ULoadoutMenuViewData*>& loadoutMenuSlotButtonData, const ELoadoutSlot slotSelected, const bool isNextSlot);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetIsPerkSurfacingExperimentActive(const bool isPerkSurfacingExperimentActive);

};
