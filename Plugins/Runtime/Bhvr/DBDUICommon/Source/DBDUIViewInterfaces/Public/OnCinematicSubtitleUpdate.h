#pragma once

#include "CoreMinimal.h"
#include "OnCinematicSubtitleUpdate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCinematicSubtitleUpdate, const TArray<FString>&, subtitlesText);
