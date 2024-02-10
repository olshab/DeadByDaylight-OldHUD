#pragma once

#include "CoreMinimal.h"
#include "S3DisconnectionBotReplacementConfig.generated.h"

USTRUCT()
struct FS3DisconnectionBotReplacementConfig
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool EnableDisconnectionBotReplacement;

	UPROPERTY()
	int32 ReplacementBotRank;

	UPROPERTY()
	bool UsePlayerRankForReplacementBot;

public:
	DEADBYDAYLIGHT_API FS3DisconnectionBotReplacementConfig();
};

FORCEINLINE uint32 GetTypeHash(const FS3DisconnectionBotReplacementConfig) { return 0; }
