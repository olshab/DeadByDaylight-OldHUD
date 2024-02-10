#pragma once

#include "CoreMinimal.h"
#include "CoreButtonSelector.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "TabWidgetData.h"
#include "CoreTabContainerWidget.generated.h"

class UGridPanel;
class UAkAudioEvent;
class UCoreTabWidget;
class UMaterialInterface;
class UCoreSelectableButtonWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UCoreTabContainerWidget : public UCoreButtonSelector
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAkAudioEvent* InputPromptTriggeredSfx;

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	bool AlignHorizontally;

	UPROPERTY(EditInstanceOnly, NoClear)
	FMargin TabPadding;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UCoreTabWidget> CoreTabClass;

	UPROPERTY(BlueprintReadWrite, meta=(BindWidgetOptional))
	UGridPanel* TabContainer;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	bool UseControllerTabSwitching;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, NoClear)
	bool CanLoop;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly)
	bool FillContainerSpace;

private:
	UPROPERTY(EditInstanceOnly)
	bool SendAnalyticsData;

public:
	UFUNCTION(BlueprintCallable)
	void UpdateBackgroundSkin(int32 key, UMaterialInterface* skinMaterial);

	UFUNCTION(BlueprintCallable)
	void SetUseControllerTabSwitching(bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetUiTakeoverActive(bool isActive);

	UFUNCTION(BlueprintCallable)
	void SetTabVisible(int32 key, bool visible);

	UFUNCTION(BlueprintCallable)
	void SetTabEnabled(int32 key, bool enabled);

	UFUNCTION(BlueprintCallable)
	void SetNotificationVisibility(int32 key, bool hasNotification);

	UFUNCTION(BlueprintCallable)
	void RemoveTabs();

private:
	UFUNCTION()
	void OnTabSelected(UCoreSelectableButtonWidget* selectedButton);

public:
	UFUNCTION(BlueprintCallable)
	void LayOutTabs();

	UFUNCTION(BlueprintCallable)
	void Init(const TArray<FTabWidgetData>& tabsData);

	UFUNCTION(BlueprintPure)
	int32 GetTabIndex(int32 key) const;

	UFUNCTION(BlueprintPure)
	UCoreTabWidget* GetTab(int32 key) const;

public:
	UCoreTabContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreTabContainerWidget) { return 0; }
