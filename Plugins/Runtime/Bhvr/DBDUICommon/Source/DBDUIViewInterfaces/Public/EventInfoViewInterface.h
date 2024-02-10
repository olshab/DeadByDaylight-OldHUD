#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventInfoViewInterface.generated.h"

class UEventTabViewData;

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEventInfoViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEventInfoViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SetArchivesButtonVisibility(bool isVisible);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init(UEventTabViewData* viewData, const FEventEntryPopupSkinUIData& skinData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void DisableArchivesButton();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Deinit();

};
