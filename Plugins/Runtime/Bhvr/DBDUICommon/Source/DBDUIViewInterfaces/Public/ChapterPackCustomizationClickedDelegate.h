#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "ChapterPackCustomizationClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChapterPackCustomizationClickedDelegate, const FStoreRedirectionData&, redirectionData);
