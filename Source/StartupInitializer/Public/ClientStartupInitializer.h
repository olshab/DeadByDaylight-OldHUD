#pragma once

#include "CoreMinimal.h"
#include "StartupInitializer.h"
#include "ClientStartupInitializerInterface.h"
#include "ClientStartupInitializer.generated.h"

UCLASS()
class STARTUPINITIALIZER_API UClientStartupInitializer : public UStartupInitializer, public IClientStartupInitializerInterface
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnDynamicContentLoaded(bool success);

public:
	UClientStartupInitializer();
};

FORCEINLINE uint32 GetTypeHash(const UClientStartupInitializer) { return 0; }
