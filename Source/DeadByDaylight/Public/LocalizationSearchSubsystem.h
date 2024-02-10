#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LocalizationSearchSubsystem.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API ULocalizationSearchSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	ULocalizationSearchSubsystem();
};

FORCEINLINE uint32 GetTypeHash(const ULocalizationSearchSubsystem) { return 0; }
