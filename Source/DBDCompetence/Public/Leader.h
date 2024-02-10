#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Leader.generated.h"

class ULeaderEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULeader : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _actionSpeedModifier;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<ULeaderEffect> _leaderStatusEffect;

public:
	ULeader();
};

FORCEINLINE uint32 GetTypeHash(const ULeader) { return 0; }
