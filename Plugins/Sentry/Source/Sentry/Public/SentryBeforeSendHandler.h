#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SentryBeforeSendHandler.generated.h"

class USentryEvent;
class USentryHint;

UCLASS(Blueprintable)
class SENTRY_API USentryBeforeSendHandler : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	USentryEvent* HandleBeforeSend(USentryEvent* Event, USentryHint* Hint);

public:
	USentryBeforeSendHandler();
};

FORCEINLINE uint32 GetTypeHash(const USentryBeforeSendHandler) { return 0; }
