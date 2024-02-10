#pragma once

#include "CoreMinimal.h"
#include "S3RemoteContentManifestEntry.generated.h"

USTRUCT()
struct FS3RemoteContentManifestEntry
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Schema;

	UPROPERTY()
	FString Uri;

	UPROPERTY()
	FString ContentVersion;

	UPROPERTY()
	FString PackagedPath;

	UPROPERTY()
	FString DownloadStrategy;

public:
	DEADBYDAYLIGHT_API FS3RemoteContentManifestEntry();
};

FORCEINLINE uint32 GetTypeHash(const FS3RemoteContentManifestEntry) { return 0; }
