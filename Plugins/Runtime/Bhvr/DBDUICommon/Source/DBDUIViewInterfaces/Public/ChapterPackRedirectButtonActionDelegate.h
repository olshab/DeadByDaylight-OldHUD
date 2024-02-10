#pragma once

#include "CoreMinimal.h"
#include "ChapterPackRedirectButtonActionDelegate.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChapterPackRedirectButtonActionDelegate, const FString&, chapterPackId, const FString&, heritagePackId);
