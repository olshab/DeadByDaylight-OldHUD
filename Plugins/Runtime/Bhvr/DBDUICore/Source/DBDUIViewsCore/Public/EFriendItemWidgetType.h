#pragma once

#include "CoreMinimal.h"
#include "EFriendItemWidgetType.generated.h"

UENUM(BlueprintType)
enum EFriendItemWidgetType
{
	Friend,
	ViewProfile,
	PendingSentRequest,
	PendingReceivedRequest,
	NotFriend,
	Blocked,
};
