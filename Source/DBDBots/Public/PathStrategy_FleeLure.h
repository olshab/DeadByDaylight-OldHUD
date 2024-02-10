#pragma once

#include "CoreMinimal.h"
#include "PathStrategy_Flee.h"
#include "PathStrategy_FleeLure.generated.h"

UCLASS(EditInlineNew)
class DBDBOTS_API UPathStrategy_FleeLure : public UPathStrategy_Flee
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	float MaximumRangeToLureableDangerObject;

	UPROPERTY(EditDefaultsOnly)
	float MaxActiveTimeSecondsEndgame;

	UPROPERTY(EditDefaultsOnly)
	TArray<FString> LostFocusInteractionIds;

public:
	UPathStrategy_FleeLure();
};

FORCEINLINE uint32 GetTypeHash(const UPathStrategy_FleeLure) { return 0; }
