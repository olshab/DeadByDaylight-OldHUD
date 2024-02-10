#pragma once

#include "CoreMinimal.h"
#include "FriendSearchPopupViewInterface.h"
#include "CoreGenericTextInputPopupWidget.h"
#include "Templates/SubclassOf.h"
#include "FriendSearchPopupWidget.generated.h"

class UDBDScrollBox;
class UCoreInputSwitcherWidget;
class UCoreButtonWidget;
class UFriendItemWidget;

UCLASS(EditInlineNew)
class DBDUIVIEWSCORE_API UFriendSearchPopupWidget : public UCoreGenericTextInputPopupWidget, public IFriendSearchPopupViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UCoreInputSwitcherWidget* FriendSearchWidget;

	UPROPERTY(BlueprintReadOnly, meta=(BindWidgetOptional))
	UDBDScrollBox* FriendSearchScrollBox;

	UPROPERTY(EditAnywhere, NoClear)
	TSubclassOf<UFriendItemWidget> FriendItemWidgetClass;

	UPROPERTY(Export)
	TMap<FString, UFriendItemWidget*> _friendsMap;

protected:
	UFUNCTION()
	void OnFriendClicked(UCoreButtonWidget* buttonTarget);

public:
	UFriendSearchPopupWidget();
};

FORCEINLINE uint32 GetTypeHash(const UFriendSearchPopupWidget) { return 0; }
