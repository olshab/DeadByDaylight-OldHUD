#pragma once

#include "CoreMinimal.h"
#include "S3RemoteContentManifestEntry.h"
#include "S3RemoteContentManifest.generated.h"

USTRUCT()
struct FS3RemoteContentManifest
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FS3RemoteContentManifestEntry> Entries;

public:
	DEADBYDAYLIGHT_API FS3RemoteContentManifest();
};

FORCEINLINE uint32 GetTypeHash(const FS3RemoteContentManifest) { return 0; }
