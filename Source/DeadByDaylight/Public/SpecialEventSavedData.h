#pragma once

#include "CoreMinimal.h"
#include "SpecialEventSavedData.generated.h"

USTRUCT()
struct FSpecialEventSavedData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	bool EventEntryScreenOpened;

	UPROPERTY()
	bool EventSplashScreenSeen;

public:
	DEADBYDAYLIGHT_API FSpecialEventSavedData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventSavedData) { return 0; }
