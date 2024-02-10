#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "TabWidgetData.h"
#include "EEventEntryTabState.h"
#include "EventEntryPopupSkinUIData.h"
#include "MilestoneTrackerViewData.h"
#include "UObject/ScriptInterface.h"
#include "EventEntryViewInterface.generated.h"

class UDataTable;
class IEventInfoViewInterface;
class IEventCollectionViewInterface;
class UEventEntryViewData;
class IEventDetailsViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEventEntryViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEventEntryViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabsData(const TArray<FTabWidgetData>& tabsData, const int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetOverlayState(const EEventEntryTabState& tabState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMilestoneTrackerData(const FMilestoneTrackerViewData& viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SelectMilestoneTrackerItem(FName itemId);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RequestOverlayClosure();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void InitializeOverlay(UEventEntryViewData* viewData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IEventCollectionViewInterface> GetStoreSubPresenterInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool GetRowDataFromEventSkinDataTable(FEventEntryPopupSkinUIData& skinData, const FText& eventFrameLabel);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IEventInfoViewInterface> GetEventSubPresenterInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	UDataTable* GetEventSkinDataTable() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IEventDetailsViewInterface> GetDetailsSubPresenterInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IEventCollectionViewInterface> GetCollectionSubPresenterInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DeselectMilestoneTrackerItems();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void ChangeSelectedTab(const int32 key);

};
