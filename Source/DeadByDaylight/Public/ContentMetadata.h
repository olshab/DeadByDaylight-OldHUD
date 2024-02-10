#pragma once

#include "CoreMinimal.h"
#include "ContentMetadata.generated.h"

USTRUCT()
struct FContentMetadata
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool RebootClient;

	UPROPERTY()
	FString DeploymentDate;

public:
	DEADBYDAYLIGHT_API FContentMetadata();
};

FORCEINLINE uint32 GetTypeHash(const FContentMetadata) { return 0; }
