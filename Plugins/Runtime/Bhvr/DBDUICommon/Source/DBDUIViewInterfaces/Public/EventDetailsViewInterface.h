#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "DetailsTabViewData.h"
#include "EventEntryPopupSkinUIData.h"
#include "EventDetailsViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UEventDetailsViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IEventDetailsViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Init(const FDetailsTabViewData& viewData, const FEventEntryPopupSkinUIData& skinData);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Deinit();

};
