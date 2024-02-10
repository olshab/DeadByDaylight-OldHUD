#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryHint.generated.h"

class USentryAttachment;

UCLASS(BlueprintType)
class SENTRY_API USentryHint : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void AddAttachment(USentryAttachment* Attachment);

public:
	USentryHint();
};

FORCEINLINE uint32 GetTypeHash(const USentryHint) { return 0; }
