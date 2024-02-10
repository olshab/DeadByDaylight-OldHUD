#pragma once

#include "CoreMinimal.h"
#include "OnMuteBackgroundAudio.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMuteBackgroundAudio, const bool, shouldMute);
