#pragma once

#include "CoreMinimal.h"
#include "SentryBeforeSendHandler.h"
#include "BhvrBeforeSendHandler.generated.h"

UCLASS()
class UBhvrBeforeSendHandler : public USentryBeforeSendHandler
{
	GENERATED_BODY()

public:
	UBhvrBeforeSendHandler();
};

FORCEINLINE uint32 GetTypeHash(const UBhvrBeforeSendHandler) { return 0; }
