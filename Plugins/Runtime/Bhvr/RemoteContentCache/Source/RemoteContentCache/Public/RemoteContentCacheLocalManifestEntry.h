#pragma once

#include "CoreMinimal.h"
#include "RemoteContentCacheLocalManifestEntry.generated.h"

USTRUCT()
struct FRemoteContentCacheLocalManifestEntry
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Uri;

	UPROPERTY()
	FString ContentVersion;

public:
	REMOTECONTENTCACHE_API FRemoteContentCacheLocalManifestEntry();
};

FORCEINLINE uint32 GetTypeHash(const FRemoteContentCacheLocalManifestEntry) { return 0; }
