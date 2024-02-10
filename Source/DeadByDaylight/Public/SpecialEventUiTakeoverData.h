#pragma once

#include "CoreMinimal.h"
#include "SpecialEventUiTakeoverData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialEventUiTakeoverData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseMainMenuTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseEventEntryPopupTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseArchivesTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseStoreShrineTakeover;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	bool UseLobbyTakeover;

public:
	DEADBYDAYLIGHT_API FSpecialEventUiTakeoverData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventUiTakeoverData) { return 0; }
