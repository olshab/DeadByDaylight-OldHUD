#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryId.generated.h"

UCLASS(BlueprintType)
class SENTRY_API USentryId : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure)
	FString ToString() const;

public:
	USentryId();
};

FORCEINLINE uint32 GetTypeHash(const USentryId) { return 0; }
