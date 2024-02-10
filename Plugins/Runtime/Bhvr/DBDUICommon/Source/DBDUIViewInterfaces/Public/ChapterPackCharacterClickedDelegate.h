#pragma once

#include "CoreMinimal.h"
#include "StoreRedirectionData.h"
#include "ChapterPackCharacterClickedDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChapterPackCharacterClickedDelegate, const FStoreRedirectionData&, redirectionData);
