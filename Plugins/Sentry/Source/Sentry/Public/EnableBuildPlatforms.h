#pragma once

#include "CoreMinimal.h"
#include "EnableBuildPlatforms.generated.h"

USTRUCT(BlueprintType)
struct FEnableBuildPlatforms
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableLinux;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableWindows;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableIOS;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableAndroid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableMac;

public:
	SENTRY_API FEnableBuildPlatforms();
};

FORCEINLINE uint32 GetTypeHash(const FEnableBuildPlatforms) { return 0; }
