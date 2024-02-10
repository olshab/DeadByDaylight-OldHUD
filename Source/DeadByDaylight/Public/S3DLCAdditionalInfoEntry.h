#pragma once

#include "CoreMinimal.h"
#include "S3DLCAdditionalInfoEntry.generated.h"

USTRUCT()
struct FS3DLCAdditionalInfoEntry
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString DlcId;

	UPROPERTY()
	FString AvailableStartDate;

	UPROPERTY(SkipSerialization)
	bool AvailableStartDate_IsSet;

	UPROPERTY()
	FString AvailableEndDate;

	UPROPERTY(SkipSerialization)
	bool AvailableEndDate_IsSet;

	UPROPERTY()
	bool IsShownInGameStore;

	UPROPERTY(SkipSerialization)
	bool IsShownInGameStore_IsSet;

public:
	DEADBYDAYLIGHT_API FS3DLCAdditionalInfoEntry();
};

FORCEINLINE uint32 GetTypeHash(const FS3DLCAdditionalInfoEntry) { return 0; }
