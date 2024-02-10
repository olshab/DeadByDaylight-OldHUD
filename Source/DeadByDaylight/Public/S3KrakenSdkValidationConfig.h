#pragma once

#include "CoreMinimal.h"
#include "S3KrakenSdkValidationConfig.generated.h"

USTRUCT()
struct FS3KrakenSdkValidationConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool Enabled;

	UPROPERTY()
	bool UseWhitelist;

	UPROPERTY()
	TArray<FString> Whitelist;

	UPROPERTY(SkipSerialization)
	bool Whitelist_IsSet;

public:
	DEADBYDAYLIGHT_API FS3KrakenSdkValidationConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3KrakenSdkValidationConfig) { return 0; }
