#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ExperimentsSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UExperimentsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UExperimentsSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UExperimentsSubsystem) { return 0; }
