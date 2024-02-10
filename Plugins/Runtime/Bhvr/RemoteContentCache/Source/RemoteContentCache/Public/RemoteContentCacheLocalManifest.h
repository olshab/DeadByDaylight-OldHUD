#pragma once

#include "CoreMinimal.h"
#include "RemoteContentCacheLocalManifestEntry.h"
#include "RemoteContentCacheLocalManifest.generated.h"

USTRUCT()
struct FRemoteContentCacheLocalManifest
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FRemoteContentCacheLocalManifestEntry> Entries;

public:
	REMOTECONTENTCACHE_API FRemoteContentCacheLocalManifest();
};

FORCEINLINE uint32 GetTypeHash(const FRemoteContentCacheLocalManifest) { return 0; }
