#pragma once

#include "CoreMinimal.h"
#include "EGuidedState.h"
#include "GuidingInfo.generated.h"

class ADBDPlayer;

USTRUCT()
struct FGuidingInfo
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TArray<ADBDPlayer*> _guidingPlayers;

	UPROPERTY()
	EGuidedState _guidedState;

public:
	DEADBYDAYLIGHT_API FGuidingInfo();
};

FORCEINLINE uint32 GetTypeHash(const FGuidingInfo) { return 0; }
