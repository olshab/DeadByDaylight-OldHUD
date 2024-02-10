#pragma once

#include "CoreMinimal.h"
#include "SoftRemoteContentCacheObjectPtr.generated.h"

USTRUCT(BlueprintType)
struct FSoftRemoteContentCacheObjectPtr
{
	GENERATED_BODY()

public:
	REMOTECONTENTCACHE_API FSoftRemoteContentCacheObjectPtr();
};

FORCEINLINE uint32 GetTypeHash(const FSoftRemoteContentCacheObjectPtr) { return 0; }
