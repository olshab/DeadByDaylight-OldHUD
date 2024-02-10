#pragma once

#include "CoreMinimal.h"
#include "EnableBuildTargets.generated.h"

USTRUCT(BlueprintType)
struct FEnableBuildTargets
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableClient;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableGame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableEditor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableServer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bEnableProgram;

public:
	SENTRY_API FEnableBuildTargets();
};

FORCEINLINE uint32 GetTypeHash(const FEnableBuildTargets) { return 0; }
