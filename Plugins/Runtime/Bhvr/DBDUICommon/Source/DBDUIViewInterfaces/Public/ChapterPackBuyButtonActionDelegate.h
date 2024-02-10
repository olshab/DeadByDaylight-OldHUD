#pragma once

#include "CoreMinimal.h"
#include "ChapterPackBuyButtonActionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChapterPackBuyButtonActionDelegate, const FString&, packId);
