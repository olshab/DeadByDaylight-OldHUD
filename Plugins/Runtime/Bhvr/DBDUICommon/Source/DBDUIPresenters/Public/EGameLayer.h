#pragma once

#include "CoreMinimal.h"
#include "EGameLayer.generated.h"

UENUM(BlueprintType)
enum class EGameLayer : uint8
{
	Default,
	LowOverlay,
	Overlay,
	ToastNotifications,
	UMGPopup,
	HighOverlay,
	Alerts,
	Tooltip,
	Watermark,
};
