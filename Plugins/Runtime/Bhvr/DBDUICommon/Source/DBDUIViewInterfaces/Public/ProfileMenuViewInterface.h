#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EProfileMenuState.h"
#include "TabWidgetData.h"
#include "UObject/ScriptInterface.h"
#include "ProfileMenuViewInterface.generated.h"

class IProfileMenuCustomizationViewInterface;
class IProfileMenuStatsViewInterface;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UProfileMenuViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IProfileMenuViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTitle(const FText& title);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabSelected(int32 key);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabsData(const TArray<FTabWidgetData>& tabsData, int32 selectedKey);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetTabEnabled(int32 key, bool enabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetSubtitle(const FText& subtitle);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetMenuState(EProfileMenuState menuState);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetIsFocused(const bool isFocused);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IProfileMenuStatsViewInterface> GetProfileMenuStatsInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IProfileMenuCustomizationViewInterface> GetProfileMenuBannerInterface() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	TScriptInterface<IProfileMenuCustomizationViewInterface> GetProfileMenuBadgeInterface() const;

};
