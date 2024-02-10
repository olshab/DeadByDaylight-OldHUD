#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "PlayerCardSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UPlayerCardSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	UPlayerCardSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const UPlayerCardSubsystem) { return 0; }
