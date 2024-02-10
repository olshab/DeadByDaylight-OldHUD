#pragma once

#include "CoreMinimal.h"
#include "SentryIoBaseSubsystem.h"
#include "SentryIoSubsystem.generated.h"

UCLASS()
class SENTRYIO_API USentryIoSubsystem : public USentryIoBaseSubsystem
{
	GENERATED_BODY()

public:
	USentryIoSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const USentryIoSubsystem) { return 0; }
