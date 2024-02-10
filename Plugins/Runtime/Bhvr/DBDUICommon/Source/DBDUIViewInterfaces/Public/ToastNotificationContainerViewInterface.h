#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ToastNotificationViewData.h"
#include "ToastNotificationContainerViewInterface.generated.h"

UINTERFACE(Blueprintable)
class DBDUIVIEWINTERFACES_API UToastNotificationContainerViewInterface : public UInterface
{
	GENERATED_BODY()
};

class DBDUIVIEWINTERFACES_API IToastNotificationContainerViewInterface : public IInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void RemoveToastNotification(const int32 notificationId);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void AddToastNotification(const FToastNotificationViewData& toastData);

};
