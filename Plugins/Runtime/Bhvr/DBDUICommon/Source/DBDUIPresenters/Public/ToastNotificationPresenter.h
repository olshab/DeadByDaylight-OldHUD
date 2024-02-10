#pragma once

#include "CoreMinimal.h"
#include "Presenter.h"
#include "Templates/SubclassOf.h"
#include "ToastNotificationPresenter.generated.h"

class UUserWidget;

UCLASS(EditInlineNew)
class DBDUIPRESENTERS_API UToastNotificationPresenter : public UPresenter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<UUserWidget> ToastNotificationContainerWidgetClass;

private:
	UFUNCTION()
	void OnNotificationRemoved(const uint32 notificationId);

	UFUNCTION()
	void OnButtonSelected(const int32 buttonId, const uint32 notificationId);

	UFUNCTION()
	void DisplayPopup(const uint32 notificationId);

public:
	UToastNotificationPresenter();
};

FORCEINLINE uint32 GetTypeHash(const UToastNotificationPresenter) { return 0; }
