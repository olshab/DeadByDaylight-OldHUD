#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ToastNotificationContainerViewInterface.h"
#include "CoreBaseUserWidget.h"
#include "CoreToastNotificationContainerWidget.generated.h"

class UVerticalBox;
class UCoreToastNotificationWidget;

UCLASS(EditInlineNew)
class UCoreToastNotificationContainerWidget : public UCoreBaseUserWidget, public IToastNotificationContainerViewInterface
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UCoreToastNotificationWidget> ToastNotificationWidgetClass;

	UPROPERTY(meta=(BindWidgetOptional))
	UVerticalBox* ToastsContainer;

private:
	UPROPERTY(Export)
	TMap<int32, UCoreToastNotificationWidget*> _toastsDisplayedOnScreen;

protected:
	UFUNCTION()
	void HandleToastPromptSelected(const uint32 notificationId);

	UFUNCTION()
	void HandleToastDisplayEnded(const uint32 notificationId);

	UFUNCTION()
	void HandleToastButtonSelected(const int32 buttonId, const uint32 notificationId);

public:
	UCoreToastNotificationContainerWidget();
};

FORCEINLINE uint32 GetTypeHash(const UCoreToastNotificationContainerWidget) { return 0; }
