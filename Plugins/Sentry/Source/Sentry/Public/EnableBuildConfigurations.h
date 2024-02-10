#pragma once

#include "CoreMinimal.h"
#include "EnableBuildConfigurations.generated.h"

USTRUCT(BlueprintType)
struct FEnableBuildConfigurations
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDebug;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDebugGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableDevelopment;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableTest;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableShipping;

public:
	SENTRY_API FEnableBuildConfigurations();
};

FORCEINLINE uint32 GetTypeHash(const FEnableBuildConfigurations) { return 0; }
